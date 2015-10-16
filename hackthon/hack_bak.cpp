
										
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>
#include <stdlib.h>    
#include <time.h>      

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/

bool emptyBoard[15][30] = {false};
bool currentBoard[15][30] = {false};
vector<int> region1 {0, 10, 0, 7};
vector<int> region2 {10, 20, 0, 7};
vector<int> region3 {20, 30, 0, 7};
vector<int> region4 {0, 10, 7, 15};
vector<int> region5 {10, 20, 7, 15};
vector<int> region6 {20, 30, 7, 15};

unordered_map<int, vector<int>> regionMap ({{1, region1},
                                            {2, region2},
                                            {3, region3},
                                            {4, region4},
                                            {5, region5},
                                            {6, region6}});
int myPositionX = 0;
int myPositionY = 0;
int targetX = 0;
int targetY = 0;
void print_board(); 
void run_board();
int directionCount(int posX, int posY, std::string dirCheck);
int howfarCount(int posX, int posY, std::string dirCheck);
float boardDensity(int startX, int startY, int endX, int endY);
unordered_map<float, int> getDensities(vector<int>& ioDensities);
string getMove(int regionIndex);
string getTheBestMove();

int main()
{
    print_board();
    cout << endl;
    run_board();
    /*
    int playerCount;
    cin >> playerCount; cin.ignore();
    int myId;
    cin >> myId; cin.ignore();
    int deployCount = 3;
        std::string currentDirection = "RIGHT";

    // game loop
    while (1) {
        int helperBots;
        cin >> helperBots; cin.ignore();
        for (int i = 0; i < playerCount; i++) {
            int x;
            int y;
            cin >> x >> y; cin.ignore();
            currentBoard[x][y] = true;
            if (i == myId)
            {
                myPositionX = x;
                myPositionY = y;
            }
        }
        int removalCount;
        cin >> removalCount; cin.ignore();
        for (int i = 0; i < removalCount; i++) {
            int removeX;
            int removeY;
            cin >> removeX >> removeY; cin.ignore();
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        int retNum = directionCount(myPositionX, myPositionY, currentDirection);
        if (retNum >= 1)
        {
            cerr << "Debug retNum >= 1" << endl;
            cout << currentDirection << endl;
        }
        else
        {
            // Change Direction
            cerr << "Debug retNum = " << retNum << endl;
            int dir1Num = 0;
            int dir2Num = 0;
            if (currentDirection == "DOWN" || currentDirection == "UP")
            {
                dir1Num = howfarCount(myPositionX, myPositionY, "LEFT");
                dir2Num = howfarCount(myPositionX, myPositionY, "RIGHT");
                cerr << "Debug LEFT dir1Num = " << dir1Num << endl;
                cerr << "Debug RIGHT dir2Num = " << dir2Num << endl;
                if (!dir1Num && !dir2Num)
                {
                    cout << "DEPLOY" << endl;
                }
                else if (dir1Num >= dir2Num)
                {
                    currentDirection = "LEFT";
                    cout << "LEFT" << endl;
                }
                else
                {
                    currentDirection = "RIGHT";
                    cout << "RIGHT" << endl;
                }
            }
            else if (currentDirection == "LEFT" || currentDirection == "RIGHT")
            {
                dir1Num = howfarCount(myPositionX, myPositionY, "UP");
                dir2Num = howfarCount(myPositionX, myPositionY, "DOWN");
               cerr << "Debug UP dir1Num = " << dir1Num << endl;
                cerr << "Debug DOWN dir2Num = " << dir2Num << endl;
                if (!dir1Num && !dir2Num)
                {
                    cout << "DEPLOY" << endl;
                }
                else if (dir1Num >= dir2Num)
                {
                    currentDirection = "UP";
                    cout << "UP" << endl;
                }
                else
                {
                    currentDirection = "DOWN";
                    cout << "DOWN" << endl;
                }
            }
            
            //cout << currentDirection << endl;
        }
    */
}
void print_board() 
{
    for (auto x = 0; x < 15; ++x) {
        for (auto y = 0; y < 30; ++y) {
            cout << currentBoard[x][y];
        }
        cout << endl;
    }
}
void run_board()
{
    srand(time(NULL));
    int x = rand() % 14;
    int y = rand() % 29;
    currentBoard[x][y] = true;
    targetX = x;
    targetY = y;
    while (currentBoard[x][y]) {
        x = rand() % 14;
        y = rand() % 29;
    }
    currentBoard[x][y] = true;
    myPositionX = x;
    myPositionY = y;
    print_board();

    cout << getTheBestMove() << endl;

}

int howfarCount(int posX, int posY,  std::string dirCheck)
{
    if (dirCheck == "RIGHT")
    {
        int tempX = 0;
        
                int right =0;
        for (int i = posX; i < 60; ++i)
        {
            tempX = i;
            if(i>28)
				tempX = i%29 - 1;
                                
            if (currentBoard[tempX+1][posY] == false)
            {
                ++right;
            }
            else
			{
				return right;
			}                              
        }
        return right;
    }
    else if (dirCheck == "LEFT")
    {
        int tempX = 0;
        int left =0;
        for (int i = posX; i > -30; --i)
        {
            tempX = i;
            if(i < 1)
            tempX = -i +1;    
            if (currentBoard[tempX-1][posY] == false)
            {
                ++left;
            }
            else
            {
				return left;
			}                                              
        }
        return left;
    }
    else if (dirCheck == "DOWN")
    {
        int tempY = 0;
        int down =0;
        for (int i = posY; i < 30; ++i)
        {
            tempY = i;
            if(i>13)
            tempY = i%14 - 1;
                                
            if (currentBoard[posX][tempY+1] == false)
            {
                ++down;
            }
            else
            {
                return down;
            }                              
        }
        return down;
    }
    else if (dirCheck == "UP")
    {
        int tempY = 0;
        int up =0;
        for (int i = posY; i > -15; --i)
        {
            tempY = i;
            if(i < 1)
            tempY = -i +1;    
            if (currentBoard[posX][tempY -1] == false)
            {
                ++up;
            }
            else
            {
                return up;
            }                                              
        }
        return up;
    }
}

int directionCount(int posX, int posY, std::string dirCheck)
{
    int halfLengthXRight = (30 - posX);
    int halfLengthXLeft = posX;
    int halfLengthYDown = (15 - posY);
    int halfLengthYUp = posY;
    std::string whichWay = "";
    if (dirCheck == "RIGHT")
    {
        for (int i = posX + 1; i < 30; ++i)
        {
            if (currentBoard[i][posY] == true)
            {
                return i - posX - 1;
            }
        }
        return halfLengthXRight - 1;
    }
    else if (dirCheck == "LEFT")
    {
        for (int i = posX - 1; i >= 0; --i)
        {
            if (currentBoard[i][posY] == true)
            {
                return posX - i -  1;
            }
        }
        return halfLengthXLeft - 1;
    }
    else if (dirCheck == "DOWN")
    {
        for (int i = posY + 1; i < 15; ++i)
        {
            if (currentBoard[posX][i] == true)
            {
                return i - posY - 1;
            }
        }
        return halfLengthYDown - 1;
    }
    else if (dirCheck == "UP")
    {
        for (int i = posY - 1; i >= 0; --i)
        {
            if (currentBoard[posX][i] == true)
            {
                return posY - i - 1;
            }
        }
        return halfLengthYUp - 1;
    }
}


float boardDensity(int startX, int startY, int endX, int endY)
{
    int occuCounter = 0;
    for (int x = startX; x < endX; ++x)
    {
        for (int y = startY; y < startY; ++y)
        {
            if (currentBoard[x][y]) ++occuCounter;
        }
    }
    return occuCounter / ((endX - startX) * (endY - startY));
}

unordered_map<float, int> getDensities(vector<int>& ioDensities)
{
    unordered_map<float, int> oRegionDensities; // maps density to region index
    for (auto iter = regionMap.begin(); iter != regionMap.end(); ++iter)
    {
        float val = boardDensity(iter->second[0], iter->second[1], iter->second[2], iter->second[3]);
	ioDensities.push_back(val);
        oRegionDensities.insert({val, iter->first});
    }
    return oRegionDensities;
}

float distance(int x1, int y1, int x2, int y2) 
{
	return sqrt(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0));
}

/*
x > 15
(x, regionX, y, regionY) (x, regionX + 30, y, regionY) 
x < 15
(x, regionX, y, regionY) (x, regionX - 30, y, regionY)
*/

/*
 * getDistanceFromRegion()
 * purpose: given region index, returns the closet distance from current postion to the 
 *          center of that region
 *
 */
float getDistanceFromRegion(int regionIndex)
{
	if (myPositionX > 7) 
	{
		float d1 = distance(myPositionX, regionMap[regionIndex][4], myPositionY, regionMap[regionIndex][5]);
		float d2 = distance(myPositionX, regionMap[regionIndex][4] + 30, myPositionY, regionMap[regionIndex][5]);
		return d1 > d2?d1:d2;
	}
	else
	{
		float d1 = distance(myPositionX, regionMap[regionIndex][4], myPositionY, regionMap[regionIndex][5]);
		float d2 = distance(myPositionX, regionMap[regionIndex][4] - 30, myPositionY, regionMap[regionIndex][5]);
		return d1 > d2?d1:d2;
	}
}

string getMove(int regionIndex)
{
	int horiDist = regionMap[regionIndex][4] - myPositionX;
	int vertiDist = regionMap[regionIndex][5] - myPositionY; 
	if (horiDist > 0 && vertiDist > 0 )
	{
		if (horiDist < vertiDist) return "UP";
		else return "RIGHT";
	}
	else if (horiDist > 0 && vertiDist < 0)
	{
		if (horiDist < -vertiDist) return "DOWN";
		else return "RIGHT";
	}
	else if (horiDist < 0 && vertiDist > 0)
	{
		if (vertiDist > -horiDist) return "UP";
		else return "LEFT";
	}
	else if (horiDist < 0 && vertiDist < 0)
	{
		if (-vertiDist > -horiDist) return "DOWN";
		else "LEFT";
	}
	else if (horiDist == 0)
	{
		if (vertiDist > 0) return "UP";
		else return "DOWN";
	}
	else if (vertiDist == 0)
	{
		if (horiDist > 0) return "RIGHT";
		else return "LEFT";
	}
}
string getTheBestMove()
{
	vector<int> densities; //stores density values
	auto densityMap = getDensities(densities);
	sort(densities.begin(), densities.end());
	string bestMove = "";
	float bestDist = 0;
    for (auto iter = densities.begin(); iter != densities.end(); ++iter) 
    {
	int aRegionIndex = densityMap[*iter];
	float dist = getDistanceFromRegion(aRegionIndex);
        if (bestDist > dist)
	{
            bestDist = dist;
            bestMove = getMove(aRegionIndex);
	}
		
    }
	return bestMove;
}


    
    


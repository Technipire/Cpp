
										
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
vector<int> region1 {0, 10, 0, 7, 5, 3};
vector<int> region2 {10, 20, 0, 7, 15, 3};
vector<int> region3 {20, 30, 0, 7, 25, 3};
vector<int> region4 {0, 10, 7, 15, 5, 11};
vector<int> region5 {10, 20, 7, 15, 15, 11};
vector<int> region6 {20, 30, 7, 15, 25, 11};

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
void make_board(); 
void print_board(); 
void run_board();
int directionCount(int posX, int posY, std::string dirCheck);
int howfarCount(int posX, int posY, std::string dirCheck);
double boardDensity(int startX, int startY, int endX, int endY);
unordered_map<int, double> getDensities(vector<double>& ioDensities);
string getMove(int regionIndex);
string getTheBestMove();

int main()
{
    make_board();
    print_board();
    cout << endl;
    run_board();
}

void make_board() 
{
    srand(time(NULL));
    for (int x = 0; x < 15; ++x) {
        for (int y = 0; y < 30; ++y) {
            if (rand() % 10 < 4)
                currentBoard[x][y] = true;
        }
    }
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


double boardDensity(int startX, int endX, int startY, int endY)
{
    double occuCounter = 0.0;
    for (int x = startX; x < endX; ++x)
    {
        for (int y = startY; y < endY; ++y)
        {
            if (currentBoard[x][y]) ++occuCounter;
        }
    }
    return occuCounter / ((endX - startX) * (endY - startY));
}

unordered_map<int, double> getDensities(vector<double>& ioDensities)
{
    unordered_map<int, double> oRegionDensities; // maps density to region index
    for (auto iter = regionMap.begin(); iter != regionMap.end(); ++iter)
    {
        double val = boardDensity(iter->second[0], iter->second[1], iter->second[2], iter->second[3]);
        cout << "val = " << val << endl;
	ioDensities.push_back(val);
        oRegionDensities.insert({iter->first, val});
    }
    return oRegionDensities;
}

double distance(int x1, int x2, int y1, int y2) 
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
double getDistanceFromRegion(int regionIndex)
{
    if (myPositionX > 7) 
    {
        double d1 = distance(myPositionX, regionMap[regionIndex][4], myPositionY, regionMap[regionIndex][5]);
        double d2 = distance(myPositionX, regionMap[regionIndex][4] + 30, myPositionY, regionMap[regionIndex][5]);
        return d1 > d2?d1:d2;
    }
    else
    {
        double d1 = distance(myPositionX, regionMap[regionIndex][4], myPositionY, regionMap[regionIndex][5]);
        double d2 = distance(myPositionX, regionMap[regionIndex][4] - 30, myPositionY, regionMap[regionIndex][5]);
        return d1 > d2?d1:d2;
    }
}

string getMove(int regionIndex)
{
	int horiDist = regionMap[regionIndex][4] - myPositionX;
	int vertiDist = regionMap[regionIndex][5] - myPositionY; 
	if (horiDist > 0 && vertiDist > 0) 
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
    vector<double> densities; //stores density values
    auto aRegionDensities = getDensities(densities);
    sort(densities.begin(), densities.end());
    string bestMove = "";
    double bestDist = 10000.0;
    int aRegionIndex = 0;
    for (auto iter = densities.begin(); iter != densities.end(); ++iter) 
    {
        // retrieve index with value
        for (auto iter2 = aRegionDensities.cbegin(); iter2 != aRegionDensities.cend(); ++iter2) {
            if (iter2->second == *iter) { 
                aRegionIndex = iter2->first;
                break;
            }
        }
	double dist = getDistanceFromRegion(aRegionIndex);
        cout << "dist = " << dist << endl;
        if (dist < bestDist)
	{
            bestDist = dist;
            bestMove = getMove(aRegionIndex);
	}
		
    }
    cout << "best Dist = " << bestDist << endl;
    cout << "bestMove: " << bestMove << endl;
    cout << "aRegionIndex = " << aRegionIndex << endl;
    cout << "my position: " << myPositionX << " " << myPositionY << endl;
    cout << "target position: " << regionMap[aRegionIndex][4]  << " " << 
                                   regionMap[aRegionIndex][5] << endl;
    return bestMove;
}


    
    


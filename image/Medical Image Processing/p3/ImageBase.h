#ifndef __IMAGE_BASE_H__
#define __IMAGE_BASE_H__
class ImageBase
{
 private:
  unsigned int SizeLength;
  static const int INITIAL_BUFFER_SIZE = 65536;

 public:
  ImageBase();
  ImageBase(unsigned int dimension);
  ~ImageBase();

  virtual void Reallocate() = 0;
  virtual ImageBase* Clone(bool copyBuffer = false) = 0;

  unsigned int GetDimension()
  {
      return this->Dimension;
  }
  unsigned char* GetBufferPointer()
  {
      return this->Buffer;
  }
  unsigned int GetBufferSize()
  {
      return this->BufferSize;
  }
  void SetBufferSize(unsigned int newBufferSize)
  {
      this->BufferSize = newBufferSize;
  }

  void SetBuffer(unsigned char* newBuffer)
  {
      this->Buffer = newBuffer;
  }
  void SetSize(unsigned int dim[3]);
  unsigned int* GetSize();
  unsigned int GetLengthOfSize()
  {
      return this->SizeLength;
  }
  void SetLengthOfSize(unsigned int newSize);
  void ReadFile(char* filename);
  void WriteFile(char* filename);
  void paramsInfo();

 protected:
  unsigned char* Buffer;
  unsigned int BufferSize;
  unsigned int Dimension;
  unsigned int *Size;
};

#endif

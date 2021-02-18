#ifndef MATRIX_H
#define MATRIX_H

#include <ostream>   /* ostream */
#include <string>    /* string  */

class Matrix
{
   public:

      // Constructors
      Matrix();
      Matrix(const unsigned r, const unsigned c);
      Matrix(const unsigned r, const unsigned c, const std::string& e);
      Matrix(const std::string& pgmPath);
      Matrix(const Matrix& A);
      ~Matrix();

      friend void Swap(Matrix& A, Matrix& B);

      // Assignment
      Matrix& operator=(const Matrix& A);

      // General Matrix Information
      bool IsEmpty() const;
      bool IsSquare() const;
      bool IsZero() const;
      unsigned NumRows() const;
      unsigned NumColumns() const;
      std::string Size() const;

      // Element Access
      int& operator()(const unsigned i, const unsigned j) const;

      // General Matrix Operations
      friend Matrix operator+(const Matrix& A, const Matrix& B);
      friend Matrix operator-(const Matrix& A, const Matrix& B);
      friend Matrix operator*(const Matrix& A, const Matrix& B);
      friend Matrix operator*(const int c, const Matrix& A);
      friend Matrix Transpose(const Matrix& A);

      // Square Matrix Information
      bool IsDiagonal() const;
      bool IsLowerTriangular() const;
      bool IsSkewSymmetric() const;
      bool IsSymmetric() const;
      bool IsUpperTriangular() const;

      // Printing and save to file
      friend std::ostream& operator<<(std::ostream&, const Matrix& A);
      void Save(const std::string& pgmPath) const;

      // Comparison
      friend bool operator==(const Matrix& A, const Matrix& B);
      friend bool operator!=(const Matrix& A, const Matrix& B);

   private:

      int **m;
      unsigned numRows;
      unsigned numColumns;
};

#endif

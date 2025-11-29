#include <iostream> 

#include <fstream> 

int main() { 

double a, b, h; 

int n; 

std::cout << "Enter a,b,h,n:"; 

std::cin >> a >> b >> h >> n; 

if (n < 1 || h == 0) { 

std::cout << "Wrong data"; 

return 0; 

} 

char saveToFile; 

std::cout << "Save result to file?"; 

std::cin >> saveToFile; 

std::ofstream fout("result.txt"); 

for (double x = a; x <= b; x += h) { 

double y = 0.0; 

if (x < 0.0) { 

for (int i = 1; i <= n; i++) { 

for (int j = 1; j <= n; j++) { 

y += (x - i + j); 

} 

} 

} 

else { 

for (int i = 1; i < n - 1; i++) { 

y += x / static_cast<double>(i); 

} 

} 

std::cout << "x=" << x << "y=" << y << std::endl; 

if (saveToFile == 'y' || saveToFile == 'Y') { 

fout << "x:" << x << std::endl; 

fout << "y:" << y << std::endl; 

fout << "n:" << n << std::endl; 

} 

} 

fout.close(); 

return 0; 

} 

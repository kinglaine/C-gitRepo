## Pseudoscope for linear regression.
#include <fstream>
std::ifstream infile("thefile.txt");

//get the sum of every x and y
int x, y;
sumx = 0;
function sumx (){
    while (infile >> i)
{
    x = i;
    sumx = sumx + x;
    
}

}
return sumx
}
function sumy (){
    while (infile >> j)
{
    y = j;
    sumy = sumy + y;
}
return sumy 
}

//get sum of xy
sumxy = 0;
function sumxy (){
    while (infile >> i >> j)
{
    x = i;
    y = j;
    sumxy = x + y;
}
return sumxy
}
function linecount(){
    var = count;
    while(infile >> i){
        count ++;
    }
}
//find points for equation y = mx + b
// find first point
function int point1(){
    var count = lineocount();
    var point1 = (sumy() * math.sqrt(sumx(),2)) - (sumx() * sumxy())/ count * math.sqrt(sumx(),2) - square(sumx())

    return point1;
}
//find second point 
function int point2(){
    var count = lineocount();
    var point1 = (count*sumxy) - (sumx * sumy)/ count(square(sumx)) - (square(sumx))
}




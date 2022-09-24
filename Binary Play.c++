code in c++
****************************************
int binarySequence(int N, int X){
if(N==1)
{
return0 ;
}
if(X%2 ==0)
{
return binarySequence(N-1,X/2)==0?1:0;
}
else
{
return binarySequence(N-1,(x+1)/2);
}
}

//COLABORADOR2 - PONGA SU NOMRE
void producto(float (*m1)[5], float (*m2)[5], float (*r)[5])
{
  //INGRESE EL CODIGO PARA EL PRODUCTO DE LAS MATRICES
using namespace std;
void main(){
int A[3][2] = {{1,1},{1,1},1,1}};
int B[2][3] = {{2,2,2},{2,2,2}};
int res[3][3];
int c, suma;
for(int i = 0; i < 3; i++){
c = 0;
while(c < 3){
suma = 0;
for(int j = 0; j < 2; j++)
suma = suma + (A[i][j] * B[j][c]);
res[i][c] = suma;
c = c + 1;
}
(int i = 0; i < 3; i++){
for(int j = 0; j < 3; j++)
cout << res[i][j] << "\ t";
count <<endl;
}

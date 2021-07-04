//COLABORADOR4 - MUSO LLUMIQUINGA CESAR GEOVANNY
void transpuesta(float (*m1)[5], float (*r)[5])
{
    for(int i=0;i<5;i++){
      for(int j=0;j<5;j++){
        r[i][j]=m1[j][i];
        cout<<r[j][i]<<" ";
      }
        cout<<endl;
    }
}

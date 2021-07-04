//COLABORADOR4 - MUSO LLUMIQUINGA CESAR GEOVANNY
void transpuesta(float (*m1)[5], float (*r)[5])
{
    int f,c;
    
    for(int i=0;i<f;i++){
      for(int j=0;j<c;j++){
        cout<<"Digite un numero ["<<i<<"]["<<j<<"]:";
        cin>>m1[i][j];
      }
    }
    
    cout<<"\nMatriz Original\n";
    for(int i=0;i<f;i++){
      for(int j=0;j<c;j++){
        cout<<m1[i][j]<<" ";
      }
      cout<<"\n";
    }
    
    cout<<"\nMatriz  Transpuesta\n";
    for(int i=0;i<f;i++){
      for(int j=0;j<c;j++){
        cout<<r[i][j]<<" ";
      }
      cout<<"\n";
    }
  }

  scanf("%d",&palpite);
        if((palpite>9999)||(palpite<1000)){
                printf("Valor Invalido, Tente novamente:\n");
                scanf("%d",&palpite);
        }
        if((palpite<=9999)&&(palpite>=1000))
            {
                PalpiteV[0]=palpite/1000;
                Teste[0]=PalpiteV[0];

                PalpiteV[1]=palpite-(PalpiteV[0]*1000);
                PalpiteV[1]=PalpiteV[1]/100;
                Teste[1]=PalpiteV[1];

                PalpiteV[2]=palpite-((PalpiteV[0]*1000)+(PalpiteV[1]*100));
                PalpiteV[2]=PalpiteV[2]/10;
                Teste[2]=PalpiteV[2];

                PalpiteV[3]=palpite-((PalpiteV[0]*1000)+(PalpiteV[1]*100)+(PalpiteV[2]*10));
                Teste[3]=PalpiteV[3];
                break;
            }

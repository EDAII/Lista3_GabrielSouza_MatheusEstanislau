#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#define DEZ 10
#define CEM 100
#define MIL 1000
#define DEZ_MIL 10000

using namespace std;

void menuComparaOutros();
void menuPrincipal();
void menuTutorial();
void menuComparativo();
void tutorialQuick();
void tutorialMerge();
void tutorialBucket();
void quick_sort(int *a, int inicio, int fim);
void mergeSort(int *vetor, int posicaoInicio, int posicaoFim);
void bucketSort(int vetor[], int tamanho);
void compara(int vetor[], int tamanho);
void comparaOrdenado();
void comparaDecrescente();
void comparaPoucoDesordenado();
void populaVetor(int vetor[], int tamanho);
void imprimirVetor(int vetor[], int tamanho);
void pause(float delay1);

int main()
{
    system("clear");
    menuPrincipal();

    return 0;
}

void menuPrincipal()
{
    int opcao;
    do
    {
        cout << "======== Menu Principal =======\n";
        cout << "= 1 - Tutorial                =\n";
        cout << "= 2 - Comparativo por tamanho =\n";
        cout << "= 3 - Outros Comparativos     =\n";
        cout << "= 0 - Sair                    =\n";
        cout << "===============================\n";

        cin >> opcao;

        switch (opcao)
        {
        case 1:
            menuTutorial();
            break;
        case 2:
            menuComparativo();
            break;
        case 3:
            menuComparaOutros();
            break;
        case 0:
            system("clear");
            break;
        default:
            cout << "Uai, não entendi!\n";
            break;
        }

    } while (opcao);
}

void menuTutorial()
{
    int opcao;
    do
    {
        cout << "=====Menu Tutorial=====\n";
        cout << "= 1 - Quick Sort      =\n";
        cout << "= 2 - Merge Sort      =\n";
        cout << "= 3 - Bucket Sort     =\n";
        cout << "= 0 - Voltar          =\n";
        cout << "=======================\n";

        cin >> opcao;

        switch (opcao)
        {
        case 1:
            tutorialQuick();
            break;
        case 2:
            tutorialMerge();
            break;
        case 3:
            tutorialBucket();
            break;
        case 0:
            break;
        default:
            cout << "Uai, não entendi!\n";
            break;
        }
    } while (opcao);
}

void menuComparativo()
{
    int vetorDez[DEZ],
        vetorCem[CEM],
        vetorMil[MIL],
        vetorDezMil[DEZ_MIL];
    int opcao;
    do
    {
        cout << "========== Menu Comparativo =========\n";
        cout << "= 1 - Comparar com 10 elementos     =\n";
        cout << "= 2 - Comparar com 100 elementos    =\n";
        cout << "= 3 - Comparar com 1.000 elementos  =\n";
        cout << "= 4 - Comparar com 10.000 elementos =\n";
        cout << "= 0 - Voltar                        =\n";
        cout << "=====================================\n";

        cin >> opcao;

        switch (opcao)
        {
        case 1:
            //populaVetor(vetorDez, DEZ);
            compara(vetorDez, DEZ);
            break;
        case 2:
            //populaVetor(vetorCem, CEM);
            compara(vetorCem, CEM);
            break;
        case 3:
            //populaVetor(vetorMil, MIL);
            compara(vetorMil, MIL);
            break;
        case 4:
            //populaVetor(vetorDezMil, DEZ_MIL);
            compara(vetorDezMil, DEZ_MIL);
            break;
        case 0:
            system("clear");
            break;
        default:
            cout << "Uai, não entendi!!\n";
            break;
        }
    } while (opcao);
}

void menuComparaOutros()
{
    int opcao;
    do
    {
        cout << "===== Outros Comparativos =====" << endl;
        cout << "= 1 - Vetor já ordenado[100]  =" << endl;
        cout << "= 2 - Vetor decrescente[100]  =" << endl;
        cout << "= 3 - Vetor pouco desordenado =" << endl;
        cout << "= 0 Voltar                    =" << endl;
        cout << "===============================" << endl;

        cin >> opcao;

        switch (opcao)
        {
        case 1:
            comparaOrdenado();
            break;
        case 2:
            comparaDecrescente();
            break;
        case 3:
            comparaPoucoDesordenado();
            break;
        case 0:
            system("clear");
            break;
        default:
            cout << "Uai, não entendi!" << endl;
            break;
        }
    } while (opcao);
}

void tutorialQuick()
{
    char lixo;
    system("clear");
    cout << "É um algoritmo de comparação que emprega a estratégia de “divisão e conquista”." << endl;
    cout << "A ideia básica é dividir o problema de ordenar um conjunto com n itens em dois\n";
    cout << "problemas menores. Os problemas menores são ordenados independentemente\n";
    cout << "e os resultados são combinados para produzir a solução final.\n";

    cout << "\nTecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");

    cout << "Basicamente a operação do algoritmo pode ser resumida na seguinte estratégia: divide sua" << endl;
    cout << "lista de entrada em duas sub-listas a partir de um pivô, para em seguida realizar o mesmo" << endl;
    cout << "procedimento nas duas listas menores até uma lista unitária." << endl;

    cout << "\nTecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");

    cout << "Funcionamento do algoritmo:\n"
         << endl;

    cout << "\t* Escolhe um elemento da lista chamado pivô." << endl;
    cout << "\t* Reorganiza a lista de forma que os elementos menores que o pivô fiquem de um lado, e os\n";
    cout << "maiores fiquem de outro. Esta operação é chamada de “particionamento”." << endl;
    cout << "\t* Recursivamente ordena a sub-lista abaixo e acima do pivô.\n"
         << endl;

    cout << "\t\tFonte: https://www.treinaweb.com.br/blog/conheca-os-principais-algoritmos-de-ordenacao/" << endl;

    cout << "\nTecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");

    cout << "Vetor desordenado: " << endl;
    cout << "[3 0 1 8 7 2 5 4 9 6]\n"
         << endl;

    cout << "pivo(3) < direita(6)" << endl;
    cout << "[3 0 1 8 7 2 5 4 9 6]\n"
         << endl;
    pause(1.5);
    system("clear");

    cout << "pivo(3) < direita(9)" << endl;
    cout << "[3 0 1 8 7 2 5 4 9 6]\n"
         << endl;
    pause(1.5);
    system("clear");

    cout << "pivo(3) < direita(4)" << endl;
    cout << "[3 0 1 8 7 2 5 4 9 6]\n"
         << endl;
    pause(1.5);
    system("clear");

    cout << "pivo(3) < direita(5)" << endl;
    cout << "[3 0 1 8 7 2 5 4 9 6]\n"
         << endl;
    pause(1.5);
    system("clear");

    cout << "pivo(3) > direita(2)" << endl;
    cout << "Troca posição (pivo com direita)" << endl;
    cout << "[(2) 0 1 8 7 (3) 5 4 9 6]\n"
         << endl;
    pause(2);
    system("clear");

    cout << "pivo(3) > esquerda(0)" << endl;
    cout << "[2 0 1 8 7 3 5 4 9 6]\n"
         << endl;
    pause(1.5);
    system("clear");

    cout << "pivo(3) > esquerda(1)" << endl;
    cout << "[2 0 1 8 7 3 5 4 9 6]\n"
         << endl;
    pause(1.5);
    system("clear");

    cout << "pivo(3) < esquerda(8)" << endl;
    cout << "Troca posição (pivo com esquerda)" << endl;
    cout << "[2 0 1 (3) 7 (8) 5 4 9 6]\n"
         << endl;
    pause(2);
    system("clear");

    cout << "pivo(3) < direita(7)" << endl;
    cout << "[2 0 1 3 7 8 5 4 9 6]\n"
         << endl;
    pause(1.5);
    system("clear");

    cout << "Pivo já está posição correta!" << endl;
    pause(2);
    system("clear");

    cout << "Todos os menores já estão a esquerda." << endl;
    cout << "Todos os maiores já estão a direita." << endl;
    cout << "[(2 0 1) 3 (7 8 5 4 9 6)]\n"
         << endl;

    cout << "\nTecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");

    cout << "Ora de ordenar os valores da esquerda!" << endl;
    cout << "[2 0 1]" << endl;

    cout << "\nTecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");

    cout << "[2 0 1]" << endl;
    cout << "direita(1) > esquerda(2)?" << endl;
    cout << "Então troca\n"
         << endl;

    cout << "[1 0 2]" << endl;
    pause(2);
    system("clear");

    cout << "[1 0 2]" << endl;
    cout << "direita(2) > esquerda(0)?" << endl;
    cout << "Então 2 já está na posição correta!\n"
         << endl;

    cout << "[1 0 2]" << endl;
    cout << "direita(0) > esquerda(1)?" << endl;
    cout << "Então troca\n"
         << endl;

    cout << "[0 1 2]" << endl;
    cout << "Agora todo o lado esquerdo até o pivo esta ordenado" << endl;
    pause(3);
    system("clear");

    cout << "[0\n";
    pause(1);
    system("clear");
    cout << "[0 1\n";
    pause(1);
    system("clear");
    cout << "[0 1 2\n";
    pause(1);
    system("clear");
    cout << "[0 1 2 3]\n"
         << endl;

    cout << "Agora falta só o lado direito!" << endl;
    cout << "[7 8 5 4 9 6]" << endl;

    cout << "\nTecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");

    cout << "A técnica é a mesma empregada ao lado esquerdo" << endl;
    cout << "Logo após os particionamentos o lado direito fica assim: \n"
         << endl;

    cout << "\nTecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");

    cout << "[4\n";
    pause(1);
    system("clear");
    cout << "[4 5\n";
    pause(1);
    system("clear");
    cout << "[4 5 6\n";
    pause(1);
    system("clear");
    cout << "[4 5 6 7\n";
    pause(1);
    system("clear");
    cout << "[4 5 6 7 8\n";
    pause(1);
    system("clear");
    cout << "[4 5 6 7 8 9]\n";

    cout << "\nTecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");

    cout << "Por fim:" << endl;

    cout << "[0\n";
    pause(1);
    system("clear");
    cout << "[0 1\n";
    pause(1);
    system("clear");
    cout << "[0 1 2\n";
    pause(1);
    system("clear");
    cout << "[0 1 2 3\n";
    pause(1);
    system("clear");
    cout << "[0 1 2 3 4\n";
    pause(1);
    system("clear");
    cout << "[0 1 2 3 4 5\n";
    pause(1);
    system("clear");
    cout << "[0 1 2 3 4 5 6\n";
    pause(1);
    system("clear");
    cout << "[0 1 2 3 4 5 6 7\n";
    pause(1);
    system("clear");
    cout << "[0 1 2 3 4 5 6 7 8\n";
    pause(1);
    system("clear");
    cout << "[0 1 2 3 4 5 6 7 8 9]\n";

    cout << "\nTecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");
}

void tutorialMerge()
{
    char lixo;
    system("clear");

    cout << "Esse  algoritmo  divide  o  problema  em  pedaços menores, resolve cada pedaço e" << endl;
    cout << "depois junta (merge) os resultados. O vetor será dividido em duas partes iguais," << endl;
    cout << "que serão cada uma divididas em duas partes, e assim até ficar um ou dois elementos" << endl;
    cout << "cuja ordenação é trivial." << endl;

    cout << "\nTecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");

    cout << "Para juntar as partes ordenadas os dois elementos de  cada parte  são separados e o menor" << endl;
    cout << "deles é selecionado e retirado de sua parte. Em seguida os menores entre os restantes são" << endl;
    cout << "comparados e assim se prossegue até juntar as partes." << endl;

    cout << "\nTecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");
}

void tutorialBucket()
{
    char lixo;
    system("clear");
    cout << "Imagine  que  você  tenha um  data  set e  um dos  campo  é  idade." << endl;
    cout << "Bom, idade é um campo com intervalo bem definido. Vamos considerar," << endl;
    cout << "que no seu data set, idade vá de 0 a 100\n"
         << endl;

    cout << "Tecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");

    cout << "Considere as seguintes idades:" << endl;
    cout << "[29 25 3 49 9 37 21 43]" << endl;
    cout << "Em cada balde vamos colocar as idade de acordo com o intervalo definido.\n"
         << endl;

    cout << "Tecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");

    cout << "[29 25 3 49 9 37 21 43]\n"
         << endl;
    cout << "|     |" << endl;
    cout << "|3    |" << endl;
    cout << "|    9|" << endl;
    cout << "|     |" << endl;
    cout << "-------" << endl;
    cout << " 0 - 9 " << endl;

    pause(1);
    system("clear");

    cout << "[29 25 3 49 9 37 21 43]\n"
         << endl;
    cout << "|     |\t"
         << "|     |" << endl;
    cout << "|3    |\t"
         << "|     |" << endl;
    cout << "|    9|\t"
         << "|     |" << endl;
    cout << "|     |\t"
         << "|     |" << endl;
    cout << "-------\t"
         << "-------" << endl;
    cout << " 0 - 9 \t"
         << " 10-29 " << endl;

    pause(1);
    system("clear");

    cout << "[29 25 3 49 9 37 21 43]\n"
         << endl;
    cout << "|     |\t"
         << "|     |\t"
         << "|     |\t" << endl;
    cout << "|3    |\t"
         << "|     |\t"
         << "|29   |\t" << endl;
    cout << "|    9|\t"
         << "|     |\t"
         << "|   25|\t" << endl;
    cout << "|     |\t"
         << "|     |\t"
         << "|21   |\t" << endl;
    cout << "-------\t"
         << "-------\t"
         << "-------\t" << endl;
    cout << " 0 - 9 \t"
         << " 10-29 \t"
         << " 20-29 \t" << endl;

    pause(1);
    system("clear");

    cout << "[29 25 3 49 9 37 21 43]\n"
         << endl;
    cout << "|     |\t"
         << "|     |\t"
         << "|     |\t"
         << "|     |\t" << endl;
    cout << "|3    |\t"
         << "|     |\t"
         << "|29   |\t"
         << "|     |\t" << endl;
    cout << "|    9|\t"
         << "|     |\t"
         << "|   25|\t"
         << "|   37|\t" << endl;
    cout << "|     |\t"
         << "|     |\t"
         << "|21   |\t"
         << "|     |\t" << endl;
    cout << "-------\t"
         << "-------\t"
         << "-------\t"
         << "-------\t" << endl;
    cout << " 0 - 9 \t"
         << " 10-29 \t"
         << " 20-29 \t"
         << " 30-39 \t" << endl;

    pause(1);
    system("clear");

    cout << "[29 25 3 49 9 37 21 43]\n"
         << endl;
    cout << "|     |\t"
         << "|     |\t"
         << "|     |\t"
         << "|     |\t"
         << "|     |\t" << endl;
    cout << "|3    |\t"
         << "|     |\t"
         << "|29   |\t"
         << "|     |\t"
         << "|49   |\t" << endl;
    cout << "|    9|\t"
         << "|     |\t"
         << "|   25|\t"
         << "|   37|\t"
         << "|   43|\t" << endl;
    cout << "|     |\t"
         << "|     |\t"
         << "|21   |\t"
         << "|     |\t"
         << "|     |\t" << endl;
    cout << "-------\t"
         << "-------\t"
         << "-------\t"
         << "-------\t"
         << "-------\t" << endl;
    cout << " 0 - 9 \t"
         << " 10-29 \t"
         << " 20-29 \t"
         << " 30-39 \t"
         << " 40-49 \t" << endl;

    //=========================================================================================
    cout << "Tecle ENTER para prosseguir";
    setbuf(stdin, NULL);
    scanf("%c", &lixo);
    system("clear");
    //========================================================================================

    cout << "|     |" << endl;
    cout << "|3    |" << endl;
    cout << "|    9|" << endl;
    cout << "|     |" << endl;
    cout << "-------" << endl;
    cout << " 0 - 9 " << endl;

    pause(1);
    system("clear");

    cout << "|     |\t"
         << "|     |" << endl;
    cout << "|3    |\t"
         << "|     |" << endl;
    cout << "|    9|\t"
         << "|     |" << endl;
    cout << "|     |\t"
         << "|     |" << endl;
    cout << "-------\t"
         << "-------" << endl;
    cout << " 0 - 9 \t"
         << " 10-29 " << endl;

    pause(1);
    system("clear");

    cout << "|     |\t"
         << "|     |\t"
         << "|     |\t" << endl;
    cout << "|3    |\t"
         << "|     |\t"
         << "|21   |\t" << endl;
    cout << "|    9|\t"
         << "|     |\t"
         << "|   25|\t" << endl;
    cout << "|     |\t"
         << "|     |\t"
         << "|29   |\t" << endl;
    cout << "-------\t"
         << "-------\t"
         << "-------\t" << endl;
    cout << " 0 - 9 \t"
         << " 10-29 \t"
         << " 20-29 \t" << endl;

    pause(1);
    system("clear");

    cout << "|     |\t"
         << "|     |\t"
         << "|     |\t"
         << "|     |\t" << endl;
    cout << "|3    |\t"
         << "|     |\t"
         << "|21   |\t"
         << "|     |\t" << endl;
    cout << "|    9|\t"
         << "|     |\t"
         << "|   25|\t"
         << "|   37|\t" << endl;
    cout << "|     |\t"
         << "|     |\t"
         << "|29   |\t"
         << "|     |\t" << endl;
    cout << "-------\t"
         << "-------\t"
         << "-------\t"
         << "-------\t" << endl;
    cout << " 0 - 9 \t"
         << " 10-29 \t"
         << " 20-29 \t"
         << " 30-39 \t" << endl;

    pause(1);
    system("clear");

    cout << "|     |\t"
         << "|     |\t"
         << "|     |\t"
         << "|     |\t"
         << "|     |\t" << endl;
    cout << "|3    |\t"
         << "|     |\t"
         << "|21   |\t"
         << "|     |\t"
         << "|43   |\t" << endl;
    cout << "|    9|\t"
         << "|     |\t"
         << "|   25|\t"
         << "|   37|\t"
         << "|   49|\t" << endl;
    cout << "|     |\t"
         << "|     |\t"
         << "|29   |\t"
         << "|     |\t"
         << "|     |\t" << endl;
    cout << "-------\t"
         << "-------\t"
         << "-------\t"
         << "-------\t"
         << "-------\t" << endl;
    cout << " 0 - 9 \t"
         << " 10-29 \t"
         << " 20-29 \t"
         << " 30-39 \t"
         << " 40-49 \t" << endl;
    cout << "\nIdades ordenadas: \n";
    cout << "[3 9 21 25 29 37 43 49]\n"
         << endl;
}

void quick_sort(int *a, int inicio, int fim)
{
    int esquerda, direita, pivo, aux;

    esquerda = inicio;
    direita = fim;
    pivo = a[(inicio + fim) / 2];

    while (esquerda <= direita)
    {
        while (a[esquerda] < pivo && esquerda < fim)
        {
            esquerda++;
        }
        while (a[direita] > pivo && direita > inicio)
        {
            direita--;
        }
        if (esquerda <= direita)
        {
            aux = a[esquerda];
            a[esquerda] = a[direita];
            a[direita] = aux;
            esquerda++;
            direita--;
        }
    }

    if (direita > inicio)
    {
        quick_sort(a, inicio, direita);
    }
    if (esquerda < fim)
    {
        quick_sort(a, esquerda, fim);
    }
}

void mergeSort(int *vetor, int posicaoInicio, int posicaoFim)
{
    int i, j, k, metadeTamanho, *vetorTemp;
    if (posicaoInicio == posicaoFim)
        return;
    metadeTamanho = (posicaoInicio + posicaoFim) / 2;

    mergeSort(vetor, posicaoInicio, metadeTamanho);
    mergeSort(vetor, metadeTamanho + 1, posicaoFim);

    i = posicaoInicio;
    j = metadeTamanho + 1;
    k = 0;
    vetorTemp = (int *)malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));

    while (i < metadeTamanho + 1 || j < posicaoFim + 1)
    {
        if (i == metadeTamanho + 1)
        {
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        }
        else
        {
            if (j == posicaoFim + 1)
            {
                vetorTemp[k] = vetor[i];
                i++;
                k++;
            }
            else
            {
                if (vetor[i] < vetor[j])
                {
                    vetorTemp[k] = vetor[i];
                    i++;
                    k++;
                }
                else
                {
                    vetorTemp[k] = vetor[j];
                    j++;
                    k++;
                }
            }
        }
    }
    for (i = posicaoInicio; i <= posicaoFim; i++)
    {
        vetor[i] = vetorTemp[i - posicaoInicio];
    }
    free(vetorTemp);
}

void bucketSort(int vetor[], int tamanho)
{
    // 1) Create n empty buckets
    vector<int> b[tamanho];

    // 2) Put array elements in different buckets
    for (int i = 0; i < tamanho; i++)
    {
        int bi = tamanho * vetor[i]; // Index in bucket
        b[bi].push_back(vetor[i]);
    }

    // 3) Sort individual buckets
    for (int i = 0; i < tamanho; i++)
        sort(b[i].begin(), b[i].end());

    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < tamanho; i++)
        for (int j = 0; j < b[i].size(); j++)
            vetor[index++] = b[i][j];
}

void compara(int vetor[], int tamanho)
{
    int teste,
        countQuick = 0,
        countMerge = 0,
        countBucket = 0;
    double timeQuick,
        timeMerge,
        timeBucket;
    clock_t inicio,
        fim;

    cout << "Digite quantos casos de teste deseja fazer : ";
    cin >> teste;

    for (int i = 0; i < teste; i++)
    {

        //Quick Sort
        populaVetor(vetor, tamanho);
        inicio = clock();
        quick_sort(vetor, 0, tamanho - 1);
        fim = clock();
        timeQuick = (double)(fim - inicio) / CLOCKS_PER_SEC;
        //pause(0.72); //Tempo para o random trocar

        //Merge sort
        populaVetor(vetor, tamanho);
        inicio = clock();
        mergeSort(vetor, 0, tamanho - 1);
        fim = clock();
        timeMerge = (double)(fim - inicio) / CLOCKS_PER_SEC;
        //pause(0.72); //Tempo para random trocar

        //Bucket Sort
        populaVetor(vetor, tamanho);
        inicio = clock();
        bucketSort(vetor, tamanho);
        fim = clock();
        timeBucket = (double)(fim - inicio) / CLOCKS_PER_SEC;

        //TIME QUICK SORT
        if (timeQuick < timeMerge && timeQuick < timeBucket)
        {
            countQuick += 1;
        }

        //TIME MERGE SORT
        if (timeMerge < timeQuick && timeMerge < timeBucket)
        {
            countMerge += 1;
        }

        //TIME BUCKET SORT
        if (timeBucket < timeQuick && timeBucket < timeMerge)
        {
            countBucket += 1;
        }

        cout << "Quick Sort(" << timeQuick << "): " << countQuick << "\t";
        cout << "Merge Sort(" << timeMerge << "): " << countMerge << "\t";
        cout << "Bucket Sort(" << timeBucket << "): " << countBucket << "\n";
    }

    cout << "Pontuação Final:\n";
    cout << "Quick Sort: " << countQuick << endl;
    cout << "Merge Sort: " << countMerge << endl;
    cout << "Bucket Sort: " << countBucket << endl;
}

void comparaOrdenado()
{
    int vetor[CEM];
    int countQuick = 0,
        countMerge = 0,
        countBucket = 0;
    time_t inicio, fim;
    double timeQuick,
        timeMerge,
        timeBucket;

    for (int i = 0; i < CEM; i++)
    {
        vetor[i] = i + 1;
    }
    imprimirVetor(vetor, CEM);

    inicio = clock();
    quick_sort(vetor, 0, CEM - 1);
    fim = clock();

    timeQuick = (double)(fim - inicio) / CLOCKS_PER_SEC;

    inicio = clock();
    mergeSort(vetor, 0, CEM - 1);
    fim = clock();

    timeMerge = (double)(fim - inicio) / CLOCKS_PER_SEC;

    if (timeQuick < timeMerge)
    {
        cout << "Quick: " << timeQuick << endl;
    }
    else
    {
        cout << "Merge: " << timeMerge << endl;
    }

    // inicio = clock();
    // bucketSort(vetor, CEM);
    // fim = clock();

    // timeBucket = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // if (timeQuick < timeMerge && timeQuick < timeBucket)
    // {
    //     cout << "Quick mais rápido em vetor ordenado, neste teste" << endl;
    //     cout << "Tempo: " << timeQuick << endl;
    // }

    // if (timeMerge < timeQuick && timeMerge < timeBucket)
    // {
    //     cout << "Merge mais rápido em vetor ordenado, neste teste" << endl;
    //     cout << "Tempo: " << timeMerge << endl;
    // }

    // if (timeBucket < timeQuick && timeBucket < timeMerge)
    // {
    //     cout << "Bucket mais rápido em vetor ordenado, neste teste" << endl;
    //     cout << "Tempo: " << timeBucket << endl;
    // }
}

void comparaDecrescente()
{
    int vetor[CEM];
    int countQuick = 0,
        countMerge = 0,
        countBucket = 0;
    time_t inicio, fim;
    double timeQuick,
        timeMerge,
        timeBucket;

    for (int i = 0; i < CEM; i++)
    {
        vetor[i] = CEM - i;
    }
    imprimirVetor(vetor, CEM);

    inicio = clock();
    quick_sort(vetor, 0, CEM - 1);
    fim = clock();

    timeQuick = (double)(fim - inicio) / CLOCKS_PER_SEC;

    inicio = clock();
    mergeSort(vetor, 0, CEM - 1);
    fim = clock();

    timeMerge = (double)(fim - inicio) / CLOCKS_PER_SEC;

    if (timeQuick < timeMerge)
    {
        cout << "Quick: " << timeQuick << endl;
    }
    else
    {
        cout << "Merge: " << timeMerge << endl;
    }
}

void comparaPoucoDesordenado()
{
    int vetor[CEM];
    int countQuick = 0,
        countMerge = 0,
        countBucket = 0;
    time_t inicio, fim;
    double timeQuick,
        timeMerge,
        timeBucket;

    for (int i = 0; i < CEM; i++)
    {
        vetor[i] = i + 1;
    }

    vetor[50] = 0;
    vetor[10] = 98;
    vetor[80] = 14;

    imprimirVetor(vetor, CEM);

    inicio = clock();
    quick_sort(vetor, 0, CEM - 1);
    fim = clock();

    timeQuick = (double)(fim - inicio) / CLOCKS_PER_SEC;

    inicio = clock();
    mergeSort(vetor, 0, CEM - 1);
    fim = clock();

    timeMerge = (double)(fim - inicio) / CLOCKS_PER_SEC;

    if (timeQuick < timeMerge)
    {
        cout << "Quick: " << timeQuick << endl;
    }
    else
    {
        cout << "Merge: " << timeMerge << endl;
    }
}

void populaVetor(int vetor[], int tamanho)
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % tamanho;
    }
}

void imprimirVetor(int vetor[], int tamanho)
{
    cout << "[ ";
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << " ";
    }
    cout << "]\n";
}

void pause(float delay1)
{

    if (delay1 < 0.001)
        return; // pode ser ajustado e/ou evita-se valores negativos.

    float inst1 = 0, inst2 = 0;

    inst1 = (float)clock() / (float)CLOCKS_PER_SEC;

    while (inst2 - inst1 < delay1)
    {
        inst2 = (float)clock() / (float)CLOCKS_PER_SEC;
    }

    return;
}
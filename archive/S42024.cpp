// #include '../comp.h

#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

/*
int S42024()
{

    int N, M;
    // get amount of points N // get amount of connections M
    cin >> N >> M;

    // vectors
    vector<int> nodes(N);
    vector<bool> visited(N);

    vector<char> colour(M);
    vector<int> point1(M);
    vector<int> point2(M);

    for (int i = 0; i < M; i++)
    {
        cin >> point1[i];
        cin >> point2[i];
        colour[i] = 'G';
    }

    for (int i = 0; i < N; i++)
    {
        nodes[i] = i + 1;
        visited[i] = false;
    }

    bool searching = true;

    //char lastColour = 'B';

    while (searching)
    {
        // search all nodes
        for (int i = 0; i < N; i++)
        {
            bool found = false;
            //bool intersected = false;

            // search all roads using that node
            for (int ii = 0; ii < point1.size(); ii++)
            {
                if (found == false)
                {
                    // uses the node in its road
                    if (point1[ii] == nodes[i] || point2[ii] == nodes[i])
                    {
                        // if its visited skip it // if either are not visited allow
                        /*if (visited[point1[ii]-1] == false || visited[point2[ii]-1] == false)
                        {   
                            // point to first intersection that we want to paint
                            int *usingPoint = new int;
                            point1[ii] == nodes[i] ? usingPoint = &point2[ii] : usingPoint = &point1[ii];

                            // if its a shared node roads seperated by one road cannot be the same colour
                            if(visited[point1[ii]-1] == true || visited[point2[ii]-1] == true){
                                // search for all roads that are coloured connected to shared node
                                for (int iii = 0; iii < point1.size(); iii++){
                                    if(intersected){break;}
                                    // if there is a shared and it returns are grey keep going till the closesr 
                                    if(point1[iii] == nodes[i] && colour[iii] != 'G' || point2[iii] == nodes[i] && colour[iii] != 'G'){
                                        //cout << point1[iii] << point2[iii] << colour[iii] << endl;
                                        // use the other point
                                        int *usingPoint2 = new int;
                                        point1[iii] == nodes[i] ? usingPoint2 = &point2[iii] : usingPoint2 = &point1[iii];
                                        
                                        //cout << colour[iii] << endl;

                                        // loop and see if there is road that is the same // the road is only seperated by 1 road
                                        for(int v = 0; v < M; v++){
                                            if(point1[v] == *usingPoint2 && point2[v] == *usingPoint || point1[v] == *usingPoint && point1[v] == *usingPoint2){
                                                //cout << point1[ii] << ' ' << point2[ii] << endl;
                                                //cout << colour[iii] << iii << endl;
                                                //cout << point1[v] << point2[v] << colour[iii] << endl;
                                                colour[ii] = colour[iii] == 'R' ? 'B' : 'R';
                                                visited[point1[ii]-1] = true;
                                                visited[point2[ii]-1] = true;   
                                                found = true;
                                                intersected = true;    
                                                //cout << colour[ii] << endl;
                                                break;
                                            }
                                        }
                                    }
                                }

                            }
                            if(found == false){
                                // paint road
                                //cout << point1[ii] << ' ' << point2[ii] << endl;
                                //colour[ii] = lastColour == 'R' ? 'B' : 'R';
                                //lastColour = lastColour == 'R' ? 'B' : 'R';
                                //cout << colour[ii] << endl;
                                //cout << *usingPoint << ' ' << nodes[*usingPoint-1] << endl;
                                //visited[*usingPoint - 1] = true;

                                colour[ii] = 'R';
                                visited[point1[ii]-1] = true;
                                visited[point2[ii]-1] = true;

                                // only one per road
                                found = true;

                            }
                        //}
                    }
                }
            }
        }
        searching = false;
        // check if all have been searched
        for (int i = 0; i < N; i++)
        {
            if (visited[i] == false)
            {
                searching = true;
            }
        }
        // if the road has 2 shared points paint it blue
        for (int i=0; i<M; i++){
            // if its coloured
            if(colour[i] == 'R'){
                // check if both are shared
                int* point11 = &point1[i];
                int* point22 = &point2[i];
                bool point1share = false;
                bool point2share = false;
                // search the points in the road and see if that path has a colour
                for(int ii=0; ii<M; ii++){
                    if((point1[ii] == *point11 && point2[i] != *point22 || point2[ii] == *point11 && point1[ii] != *point22)){
                        //cout << point1[ii] <<  point2[ii] << endl;
                        if(colour[ii] == 'R'){
                            point1share = true;
                        }
                    }
                    if((point1[ii] == *point22 && point2[i] != *point11 || point2[ii] == *point22 && point1[ii] != *point11)){
                        if(colour[ii] == 'R'){
                            point2share = true;
                        }
                    }
                }
                if(point1share && point2share){
                    colour[i] = 'B';
                }
            }
        }
        // if there is a red road touching another red road without a blue touching them between then make itself blue
        for(int i=0; i<M;i++){
            if(colour[i] == 'R'){
                // check if both are shared
                int* point11 = &point1[i];
                int* point22 = &point2[i];
                bool foundBlue = false;
                bool shared = false;
                for(int ii=0; ii<M; ii++){
                    // if its a shared point // not with itself
                    if((point1[ii] == *point11 && point2[i] != *point22 || point2[ii] == *point11 && point1[ii] != *point22)){
                        //cout << point1[ii] <<  point2[ii] << endl;
                        shared = true;
                        if(colour[ii] == 'B'){
                            foundBlue = true;
                        }
                    }
                    if((point1[ii] == *point22 && point2[i] != *point11 || point2[ii] == *point22 && point1[ii] != *point11)){
                        if(colour[ii] == 'B'){
                            foundBlue = true;
                        }
                    }
                }
                // no blue connecting to it, only red
                if(!foundBlue && shared){
                    colour[i] = 'B';
                }
            }
        }
    }

    for (int i = 0; i < M; i++)
    {
        cout << colour[i];
    }
    cout << endl;
    return 0;
} 


#if 1
int main1()
{
    S42024();
    return 0;
}
#endif

// if the middle road is grey we have to see others instead therefore RBGRBGG dont work

*/
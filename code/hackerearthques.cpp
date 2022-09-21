#include <bits/stdc++.h>

using namespace std;

vector<long long> solution(vector<long long> A)
{

    // Write your code here

    int i, x, k, j, top = 0, flag, flag2;
    vector<long long> result(A.size());

    for (i = 0; i < A.size(); i++)

    {

        flag = 1;
        flag2 = 1;

        for (j = i + 1; j < A.size(); j++)

        {

            if (A[j] > A[i])

            {

                flag = 0;

                x = A[j];

                break;
            }
        }

        if (flag == 0)

        {

            for (k = j + 1; k < A.size(); k++)

            {

                if (A[k] < x)

                {

                    flag2 = 0;

                    result[top++] = A[k];

                    break;
                }
            }

            if (flag2 != 0)

            {

                result[top++] = -1;
            }
        }

        else

        {

            result[top++] = -1;
        }
    }

    return result;
}

int main()
{

    ios::sync_with_stdio(0);

    cin.tie(0);

    int N;

    cin >> N;

    vector<long long> A(N);

    for (int i_A = 0; i_A < N; i_A++)

    {

        cin >> A[i_A];
    }

    vector<long long> out_;

    out_ = solution(A);

    cout << out_[0];

    for (int i_out_ = 1; i_out_ < out_.size(); i_out_++)

    {

        cout << " " << out_[i_out_];
    }
}
class twoStacks {
  public:
    int arr[250]={0};
    int start;
    int end;
    twoStacks() {
        start=-1;
        end=250;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        start++;
        arr[start]=x;
        // cout<<start<<endl;
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        end--;
        arr[end]=x;
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(start!=-1){
            int t=arr[start];
            start--;
            return t;
        }
        else return -1;
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        if(end!=250){
            int t=arr[end];
            end++;
            return t;
        }
        else return -1;
    }
};

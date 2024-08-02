
void push_stack(deque<int> &dq, int x) {
    dq.push_back(x);

void pop_stack(deque<int> &dq) {
    if (!dq.empty())
        dq.pop_back();
        else return;
}

int front_queue(deque<int> &dq) {
    if (!dq.empty())
      return dq.front();
  else return -1;
}

void push_queue(deque<int> &dq, int x) {
    dq.push_front(x);
}

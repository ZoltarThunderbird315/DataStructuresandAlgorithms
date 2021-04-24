top = -1

def push(a):
  global top
  if len(stack) >= max :
    print('Stack Overflow')
  else:
    stack.append(a)
    print(f'{a} pushed into the stack')
    top = top + 1
  return top

def pop():
  global top
  if top < 0:
    print('Stack underflow')
  else:
    print(f'{stack[top]} was popped out of the stack')
    top = top - 1
  return top

def peek():
  global top
  if top < 0:
    print('Stack Underflow')
  else:
    print(stack[top])


if __name__ == '__main__':
  stack = []
  #top = -1
  max = 1000
  push(10)
  push(20)
  push(30)
  peek()
  pop()
  peek()
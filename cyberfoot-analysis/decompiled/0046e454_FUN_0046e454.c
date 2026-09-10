// Address: 0046e454
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046e454(HWND param_1,int param_2,int param_3,int *param_4)

{
  tagRECT local_1c;
  tagPOINT local_c;
  
  local_c.x = param_2;
  local_c.y = param_3;
  ClientToScreen(param_1,&local_c);
  GetWindowRect(param_1,&local_1c);
  *param_4 = local_c.x - local_1c.left;
  param_4[1] = local_c.y - local_1c.top;
  return;
}


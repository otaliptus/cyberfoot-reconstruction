// Address: 0046335c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046335c(int param_1,HDC param_2)

{
  tagPOINT local_10;
  
  GetWindowOrgEx(param_2,&local_10);
  SetWindowOrgEx(param_2,local_10.x + *(int *)(param_1 + 0x40),local_10.y + *(int *)(param_1 + 0x44)
                 ,(LPPOINT)0x0);
  FUN_004673cc(*(undefined4 *)(param_1 + 0x30),0x14,param_2,param_2);
  SetWindowOrgEx(param_2,local_10.x,local_10.y,(LPPOINT)0x0);
  return;
}


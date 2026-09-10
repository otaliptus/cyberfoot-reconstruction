// Address: 00464b44
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00464b44(HDC param_1,int param_2,int param_3)

{
  tagPOINT local_14;
  
  GetWindowOrgEx(param_1,&local_14);
  SetWindowOrgEx(param_1,local_14.x - param_2,local_14.y - param_3,(LPPOINT)0x0);
  return;
}


// Address: 004b5748
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004b5748(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HDC hdc;
  HGDIOBJ pvVar1;
  
  pvVar1 = *(HGDIOBJ *)(param_4 + -4);
  hdc = (HDC)FUN_0042b5a8(param_1);
  pvVar1 = SelectObject(hdc,pvVar1);
  DeleteObject(pvVar1);
  return;
}


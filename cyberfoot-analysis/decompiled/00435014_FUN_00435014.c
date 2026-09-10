// Address: 00435014
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00435014(int param_1)

{
  FUN_00434ee8(param_1,1);
  EndPage(*(HDC *)(param_1 + 0x20));
  StartPage(*(HDC *)(param_1 + 0x20));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  FUN_004352c8(param_1);
  FUN_0042b1b4();
  return;
}


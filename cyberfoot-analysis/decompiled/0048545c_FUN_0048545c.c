// Address: 0048545c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048545c(int param_1,int param_2,int param_3)

{
  HCURSOR pHVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      pHVar1 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
      *(HCURSOR *)(param_1 + 0x60) = pHVar1;
    }
    else {
      *(int *)(param_1 + 0x60) = param_3;
    }
  }
  else if (param_2 != -1) {
    FUN_004850ac(param_1,param_2);
    if (param_3 != 0) {
      FUN_004850f4(param_1,param_2,param_3);
    }
  }
  return;
}


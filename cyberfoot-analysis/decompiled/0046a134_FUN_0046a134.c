// Address: 0046a134
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046a134(int param_1,HWND param_2)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x30) == 0) && (param_2 != *(HWND *)(param_1 + 400))) {
    if ((*(int *)(param_1 + 0x180) == 0) ||
       ((*(int *)(param_1 + 400) == 0 || (param_2 == (HWND)0x0)))) {
      FUN_00469f58(param_1);
      *(HWND *)(param_1 + 400) = param_2;
    }
    else {
      *(HWND *)(param_1 + 400) = param_2;
      SetParent(*(HWND *)(param_1 + 0x180),param_2);
      if ((4 < *(int *)PTR_DAT_0066afcc) && (*(int *)PTR_DAT_0066b790 == 2)) {
        uVar2 = 0;
        uVar1 = FUN_004080f8(3,CONCAT22(extraout_var,3));
        FUN_004673cc(param_1,0x127,uVar1,uVar2);
      }
    }
    FUN_0046a0f4(param_1);
  }
  return;
}


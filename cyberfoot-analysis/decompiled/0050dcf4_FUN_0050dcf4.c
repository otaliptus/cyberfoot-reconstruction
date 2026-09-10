// Address: 0050dcf4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0050dcf4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_004e8a38(param_1);
  cVar1 = FUN_004e4b0c();
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x500) == 0)) {
    FUN_0046cae0(param_1,extraout_EDX,extraout_ECX,L"header");
    uVar2 = (**(code **)PTR_DAT_0066af44)();
    *(undefined4 *)(param_1 + 0x500) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x27c) + 0x10) = uVar2;
  }
  return;
}


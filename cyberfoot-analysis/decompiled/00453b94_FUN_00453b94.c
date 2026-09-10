// Address: 00453b94
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00453b94(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 != param_1[0x5b]) && (param_1[0x5b] = param_2, param_1[0x61] != 0)) {
    (**(code **)(*param_1 + 0x98))();
    uVar1 = FUN_00453dec(param_1);
    FUN_004673cc(param_1[0x61],0x42b,uVar1,param_2);
    if ((*(char *)(param_1[0x61] + 0x22a) != '\0') || (*(char *)(param_1[0x61] + 0x229) != '\0')) {
      (**(code **)(*param_1 + 0x7c))();
    }
  }
  return;
}


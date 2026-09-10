// Address: 0046ea14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0046ea14(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (param_1 != *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  if (*(char *)(iVar1 + 0x10) != '\x01') {
    if (*(char *)(iVar1 + 0x10) == '\x02') {
      FUN_0046eac8(param_1,2);
    }
    else {
      FUN_0040e370(PTR_DAT_00408738,1,0);
      FUN_00404250();
    }
    return;
  }
  FUN_0046eac8(param_1,1);
  return;
}


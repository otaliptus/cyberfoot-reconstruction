// Address: 0044da54
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0044da54(int param_1,char param_2)

{
  int iVar1;
  
  if (param_2 != *(char *)(param_1 + 0xd)) {
    *(char *)(param_1 + 0xd) = param_2;
    iVar1 = FUN_0044dba8(*(undefined4 *)(param_1 + 4));
    if (iVar1 != 0) {
      FUN_0044dba8(*(undefined4 *)(param_1 + 4));
      FUN_00403c80();
    }
    FUN_0044d864(param_1);
  }
  return;
}


// Address: 004d24dc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004d24dc(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_0046d5b0(param_1,param_2,param_3);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00472158);
  if (cVar1 != '\0') {
    if (((char)param_3 != '\0') || (param_1[0x8e] == 0)) {
      FUN_004cfacc(param_1,*(undefined4 *)(param_2 + 0x6c));
    }
    if ((*(byte *)(param_2 + 0x1c) & 0x10) != 0) {
      cVar1 = FUN_004cd464(param_1);
      if (cVar1 != '\0') {
        FUN_004cfae4(param_1,*(undefined4 *)(param_2 + 0x80));
      }
      FUN_004cfa08(param_1,*(undefined1 *)(param_2 + 0x69));
    }
  }
  if (((char)param_1[0xb0] != '\0') && (param_1[0xc] != 0)) {
    cVar1 = FUN_0046cde4(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)((int)param_1 + 0x2c2) = 1;
      (**(code **)(*param_1 + 200))();
      *(undefined1 *)((int)param_1 + 0x2c2) = 0;
    }
  }
  return;
}


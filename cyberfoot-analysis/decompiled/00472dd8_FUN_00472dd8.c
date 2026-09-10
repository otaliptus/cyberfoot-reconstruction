// Address: 00472dd8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00472dd8(int param_1,int *param_2)

{
  char cVar1;
  undefined2 extraout_var;
  
  cVar1 = FUN_00403c10(param_2,PTR_PTR_00472158);
  if (cVar1 == '\0') {
    FUN_0041e750(param_1,param_2);
  }
  else {
    FUN_00472ee4(param_2,*(undefined4 *)(param_1 + 100));
    FUN_00472f44(param_2,*(undefined1 *)(param_1 + 0x69));
    FUN_0047304c(param_2,*(undefined1 *)(param_1 + 0x6a));
    (**(code **)(*param_2 + 0x48))(param_2,*(undefined4 *)(param_1 + 0x74));
    FUN_00473234(param_2,*(undefined4 *)(param_1 + 0x7c));
    FUN_00473294(param_2,*(undefined4 *)(param_1 + 0x80));
    FUN_004732f0(param_2,CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x84)));
    FUN_00473354(param_2,*(undefined1 *)(param_1 + 0x86));
    (**(code **)(*param_2 + 0x34))();
    param_2[0x12] = *(int *)(param_1 + 0x48);
    param_2[0x13] = *(int *)(param_1 + 0x4c);
    param_2[0xe] = *(int *)(param_1 + 0x38);
    param_2[0xf] = *(int *)(param_1 + 0x3c);
  }
  return;
}


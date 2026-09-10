// Address: 004f2494
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f2494(int param_1,int param_2)

{
  char cVar1;
  
  FUN_0041e66c(param_1,param_2);
  cVar1 = FUN_00403c10(param_2,PTR_PTR_004ecf40);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_2 + 0x25c);
    *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
    *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(param_2 + 0x264);
    FUN_004f2050(param_1,*(undefined4 *)(param_2 + 0x268));
    FUN_004f1ff0(param_1,*(undefined1 *)(param_2 + 0x26c));
    FUN_004f2000(param_1,*(undefined4 *)(param_2 + 0x270));
    FUN_004f1ec0(param_2);
    FUN_004f2074(param_1);
  }
  return;
}


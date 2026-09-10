// Address: 004fbc84
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004fbc84(int param_1)

{
  int iVar1;
  
  FUN_004fbab8(param_1);
  iVar1 = FUN_00403c34(*(undefined4 *)(param_1 + 0x50),PTR_PTR_004ede2c);
  *(undefined1 *)(iVar1 + 0x2cc) = *(undefined1 *)(param_1 + 0x10c);
  FUN_004f0790(iVar1,*(undefined4 *)(param_1 + 0xf8));
  FUN_004f07e4(iVar1,*(undefined4 *)(param_1 + 0xfc));
  (**(code **)(**(int **)(iVar1 + 0x2b4) + 8))
            (*(int **)(iVar1 + 0x2b4),*(undefined4 *)(param_1 + 0x100));
  FUN_004f1020(iVar1,*(undefined4 *)(param_1 + 0x108));
  FUN_004eedc0(iVar1,0);
  FUN_004eedcc(iVar1,*(char *)(param_1 + 0x104) != '\x02');
  return;
}


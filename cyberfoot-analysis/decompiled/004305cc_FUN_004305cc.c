// Address: 004305cc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004305cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x32) == '\0') || (*(char *)(param_1 + 0x31) == '\0')) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (*(int *)(iVar1 + 0xc) != 0) {
      FUN_0042efa0();
      DeleteObject(*(HGDIOBJ *)(iVar1 + 0xc));
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    FUN_0043051c(param_1);
    FUN_0043052c(param_1);
    iVar1 = *(int *)(param_1 + 0x28);
    uVar2 = FUN_00430458(param_1);
    uVar2 = FUN_0042faac(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),uVar2);
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    *(undefined1 *)(param_1 + 0x32) = 1;
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  return;
}


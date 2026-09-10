// Address: 0064ffdc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0064ffdc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar3 = PTR_DAT_0066b05c;
  iVar4 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b05c);
  FUN_004bc5a0(0xb4);
  if (-1 < iVar4 + -1) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(*(int *)puVar3 + iVar6 * 0x18);
      if (iVar1 == param_1) {
        uVar2 = *(undefined4 *)(*(int *)PTR_DAT_0066b5b8 + 0x20 + iVar1 * 0x130);
        *(undefined4 *)
         (*(int *)PTR_DAT_0066b5b8 + 0x20 + *(int *)(*(int *)puVar3 + iVar6 * 0x18) * 0x130) =
             *(undefined4 *)(*(int *)puVar3 + 0x10 + iVar6 * 0x18);
        uVar5 = FUN_00402c38();
        FUN_00650ec4(*(undefined4 *)(*(int *)puVar3 + iVar6 * 0x18),uVar2,uVar5);
        *(undefined4 *)
         (*(int *)PTR_DAT_0066b5b8 + 0x100 + *(int *)(*(int *)puVar3 + iVar6 * 0x18) * 0x130) = 0;
        *(undefined4 *)(*(int *)puVar3 + iVar6 * 0x18) = 0xffffffff;
        return;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


// Address: 0042aba0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0042aba0(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined1 *puVar3;
  HBRUSH pHVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  LOGBRUSH local_14;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0x10);
  if (*(int *)(local_8 + 8) == 0) {
    puStack_18 = (undefined1 *)0x42abc3;
    FUN_0042967c(DAT_0066c8e8);
    puStack_1c = &LAB_0042ac6d;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    if (*(int *)(local_8 + 8) == 0) {
      piVar2 = *(int **)(local_8 + 0x18);
      if (piVar2 == (int *)0x0) {
        local_14.lbHatch = 0;
        bVar1 = *(byte *)(local_8 + 0x1c);
        if (bVar1 == 0) {
          local_14.lbStyle = 0;
          puStack_18 = &stack0xfffffffc;
        }
        else if (bVar1 == 1) {
          local_14.lbStyle = 1;
          puStack_18 = &stack0xfffffffc;
        }
        else {
          local_14.lbStyle = 2;
          local_14.lbHatch = (bVar1 & 0x7f) - 2;
          puStack_18 = &stack0xfffffffc;
        }
      }
      else {
        local_14.lbStyle = 3;
        puStack_18 = &stack0xfffffffc;
        (**(code **)(*piVar2 + 0x6c))(piVar2,1);
        local_14.lbHatch = (**(code **)(**(int **)(local_8 + 0x18) + 100))();
      }
      local_14.lbColor = FUN_00429e64(*(undefined4 *)(local_8 + 0x14));
      pHVar4 = CreateBrushIndirect(&local_14);
      *(HBRUSH *)(local_8 + 8) = pHVar4;
    }
    puVar3 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x42ac74;
    puStack_1c = (undefined1 *)0x42ac6c;
    uVar5 = FUN_00429688(DAT_0066c8e8,uStack_20,puVar3);
    return uVar5;
  }
  return *(undefined4 *)(local_8 + 8);
}


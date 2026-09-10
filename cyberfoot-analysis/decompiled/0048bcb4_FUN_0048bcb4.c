// Address: 0048bcb4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0048bcb4(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  undefined4 uStack_278;
  undefined1 *puStack_274;
  undefined1 *puStack_270;
  undefined4 *local_260 [7];
  undefined4 local_244;
  undefined4 local_240;
  int local_238;
  undefined4 local_90 [33];
  undefined4 local_c;
  int *local_8;
  
  bVar7 = 0;
  puStack_270 = (undefined1 *)0x48bcd0;
  local_c = param_3;
  local_8 = param_1;
  FUN_0048bc60(param_1);
  puStack_270 = (undefined1 *)0x48bcdb;
  FUN_00403a84(local_8[0xb]);
  local_8[0xb] = 0;
  iVar3 = local_8[10];
  puStack_270 = (undefined1 *)0x48bcf5;
  uVar2 = FUN_00403a54(PTR_PTR_0041c090,1);
  *(undefined4 *)(iVar3 + 8) = uVar2;
  puStack_270 = (undefined1 *)(param_2 >> 0x1f);
  uStack_278 = 0x48bd06;
  puStack_274 = (undefined1 *)param_2;
  FUN_00420958(uVar2);
  puStack_270 = (undefined1 *)0x48bd16;
  FUN_00420b00(local_c,*(undefined4 *)(*(int *)(iVar3 + 8) + 4),param_2);
  if (0 < param_2) {
    ppuVar5 = &PTR_FUN_00665324;
    puVar6 = local_90;
    for (iVar4 = 0x21; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *ppuVar5;
      ppuVar5 = ppuVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    local_260[0] = local_90;
    puStack_270 = (undefined1 *)0x48bd51;
    FUN_0048bfc0(local_260,0x3e,0x1d0);
    puStack_274 = &LAB_0048bdd6;
    uStack_278 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_278;
    puStack_270 = &stack0xfffffffc;
    FUN_004208f4(*(undefined4 *)(iVar3 + 8));
    FUN_0048d72c(local_260,*(undefined4 *)(iVar3 + 8));
    FUN_0048c288(local_260,0xffffffff);
    *(undefined4 *)(iVar3 + 0x10) = local_244;
    *(undefined4 *)(iVar3 + 0xc) = local_240;
    *(bool *)(iVar3 + 0x14) = local_238 == 1;
    iVar3 = FUN_0048c3d4(local_260);
    puVar1 = puStack_270;
    *(char *)((int)local_8 + 0x41) = '\x01' - (iVar3 == 0);
    *in_FS_OFFSET = uStack_278;
    puStack_270 = (undefined1 *)0x48bddd;
    puStack_274 = (undefined1 *)0x48bdd5;
    FUN_0048c090(local_260,uStack_278,puVar1);
    return;
  }
  *(undefined1 *)((int)local_8 + 0x22) = 1;
  puStack_270 = (undefined1 *)0x48bdef;
  (**(code **)(*local_8 + 0x10))(local_8,local_8);
  return;
}


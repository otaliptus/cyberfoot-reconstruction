// Address: 005bdf60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_005bdf60(int *param_1)

{
  HGLOBAL hGlobal;
  undefined1 *puVar1;
  int iVar2;
  LPSTREAM *ppstm;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10 [2];
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10[1] = 0;
  local_10[0] = 0;
  puStack_24 = &LAB_005be200;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x88] == 0) {
    puStack_30 = &LAB_005be1cb;
    uStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_34;
    uVar3 = *in_FS_OFFSET;
    *in_FS_OFFSET = &stack0xffffffc0;
    puStack_2c = &stack0xfffffffc;
    FUN_00406880(local_10);
    piVar5 = (int *)local_8[0x86];
    iVar2 = (**(code **)(*piVar5 + 0x10))();
    *in_FS_OFFSET = piVar5;
    if ((iVar2 != 0) || (local_10[0] == 0)) {
      iVar2 = *(int *)local_8[0x86];
      (**(code **)(iVar2 + 0xc))(iVar2,piVar5,uVar3,(int *)local_8[0x86]);
      FUN_004ac7a4();
    }
    hGlobal = (HGLOBAL)local_8[0x85];
    if (hGlobal == (HGLOBAL)0x0) {
      (**(code **)(*(int *)local_8[0x87] + 0x20))();
      FUN_004ac7a4();
    }
    else {
      ppstm = (LPSTREAM *)FUN_00406880(local_10 + 1);
      CreateStreamOnHGlobal(hGlobal,0,ppstm);
      FUN_004ac7a4();
      (**(code **)(*(int *)local_8[0x87] + 0x14))();
      FUN_004ac7a4();
      FUN_005be768(local_8);
    }
    FUN_00406880(local_8 + 0x88);
    (*(code *)**(undefined4 **)local_8[0x86])();
    FUN_004ac7a4();
    uVar3 = FUN_00406880(local_8 + 0x89);
    puVar9 = &DAT_005be220;
    puVar8 = (undefined4 *)local_8[0x86];
    (**(code **)*puVar8)();
    FUN_004ac7a4();
    uVar4 = FUN_00406880(local_8 + 0x8a);
    puVar7 = &DAT_005be230;
    puVar6 = (undefined4 *)local_8[0x86];
    (**(code **)*puVar6)();
    piVar5 = local_8;
    if (local_8 != (int *)0x0) {
      piVar5 = local_8 + 0x93;
    }
    FUN_004aca54(local_8[0x86],&LAB_005be240,piVar5,local_8 + 0x8d,puVar6,puVar7,uVar4,puVar8,puVar9
                 ,uVar3);
    iVar2 = local_8[0x84];
    if (iVar2 != 0) {
      iVar2 = iVar2 + 8;
    }
    FUN_004aca54(local_8[0x86],local_8[0x82] + 0x10,iVar2,local_8 + 0x8e);
    if ((*(byte *)(local_8[0x82] + 0x2c) & 1) != 0) {
      (**(code **)(*local_8 + 0xdc))();
    }
    if ((*(byte *)(local_8[0x82] + 0x2c) & 8) != 0) {
      (**(code **)(*local_8 + 0xdc))();
    }
    if ((*(byte *)(local_8[0x82] + 0x2c) & 4) != 0) {
      (**(code **)(*local_8 + 0xdc))();
    }
    if ((*(byte *)(local_8[0x82] + 0x2c) & 2) != 0) {
      (**(code **)(*local_8 + 0xdc))();
    }
    (**(code **)(*(int *)local_8[0x88] + 0x14))();
    FUN_005bfce4();
    *in_FS_OFFSET = uStack_34;
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005be207;
  puStack_24 = (undefined1 *)0x5be1f7;
  FUN_00406880(local_10,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x5be1ff;
  FUN_00406880(local_10 + 1);
  return;
}


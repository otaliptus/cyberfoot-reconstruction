// Address: 00464790
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00464790(char param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_e;
  undefined4 local_a;
  
  puStack_18 = &stack0xfffffffc;
  puStack_24 = &stack0xfffffffc;
  piVar5 = (int *)0x0;
  if ((DAT_0066cb74 == (undefined4 *)0x0) || (*(char *)(DAT_0066cb74 + 0xc) != '\0')) {
    return;
  }
  puStack_1c = &LAB_00464a5c;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  DAT_0066cba0 = DAT_0066cb74;
  puStack_28 = &LAB_004649ea;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  *(undefined1 *)(DAT_0066cb74 + 0xc) = 1;
  *(char *)(DAT_0066cb74 + 7) = param_1;
  FUN_0046365c(DAT_0066cb74,DAT_0066cb7c);
  if (DAT_0066cb90 == '\x02') {
    piVar5 = (int *)FUN_00403c34(DAT_0066cb74,PTR_PTR_00460b74);
    (**(code **)(*piVar5 + 0x34))();
    *(bool *)(piVar5 + 0x1b) = piVar5[1] == 0;
  }
  if (DAT_0066cb74[1] == 0) {
LAB_00464867:
    local_e = DAT_0066cb74[3];
    local_a = DAT_0066cb74[4];
  }
  else {
    cVar2 = FUN_00403c10(DAT_0066cb74[1],PTR_PTR_004618b0);
    if (cVar2 == '\0') goto LAB_00464867;
    local_e = DAT_0066cb74[5];
    local_a = DAT_0066cb74[6];
  }
  cVar2 = FUN_0046471c();
  if (cVar2 != '\0') {
    if ((DAT_0066cb90 == '\x02') && ((char)piVar5[0x1b] != '\0')) {
LAB_004648a6:
      if (param_1 != '\0') {
        cVar2 = '\x01';
        goto LAB_004648b2;
      }
    }
    else if (DAT_0066cb90 != '\0') {
      cVar2 = FUN_00464048(1);
      if (cVar2 != '\0') goto LAB_004648a6;
    }
  }
  cVar2 = '\0';
LAB_004648b2:
  if (DAT_0066cb90 == '\x02') {
    if ((cVar2 != '\0') && ((char)piVar5[0x1b] != '\0')) {
      iVar3 = FUN_0047e4c0(piVar5[0xe]);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x220) == piVar5[0xe])) {
        FUN_00482224(iVar3,0);
      }
      FUN_004673cc(DAT_0066cb70,0xb03a,0,DAT_0066cb74);
    }
  }
  else if (DAT_0066cb94 == 0) {
    SetCursor(DAT_0066cb88);
  }
  else {
    FUN_0046e760(DAT_0066cb94);
  }
  DAT_0066cb70 = 0;
  DAT_0066cb74 = (undefined4 *)0x0;
  if ((DAT_0066cba0 != (undefined4 *)0x0) && (DAT_0066cba0[1] != 0)) {
    uVar4 = 3;
    if (cVar2 == '\0') {
      uVar4 = 4;
      DAT_0066cba0[3] = 0;
      DAT_0066cba0[4] = 0;
      local_e = 0;
      local_a = 0;
    }
    FUN_00463f14(DAT_0066cba0[2],uVar4,DAT_0066cba0,DAT_0066cba0 + 3,DAT_0066cba0[1]);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004649f1;
  puStack_28 = (undefined1 *)0x4649ad;
  FUN_00403a84(DAT_0066cb9c,uStack_2c,puVar1);
  DAT_0066cb9c = 0;
  if (DAT_0066cba0 != (undefined4 *)0x0) {
    *(undefined1 *)(DAT_0066cba0 + 0xc) = 0;
    puStack_28 = (undefined1 *)local_a;
    uStack_2c = CONCAT31((int3)((uint)local_a >> 8),cVar2);
    (**(code **)*DAT_0066cba0)(DAT_0066cba0,DAT_0066cba0[1],local_e);
  }
  DAT_0066cb74 = (undefined4 *)0x0;
  return;
}


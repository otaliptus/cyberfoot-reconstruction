// Address: 004023b8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004023b8(int param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  
  DAT_0066c5c8 = 0;
  if ((DAT_0066c5c4 == '\0') && (cVar2 = FUN_00401b3c(), cVar2 == '\0')) {
    DAT_0066c5c8 = 8;
    return 8;
  }
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if (DAT_0066c04d != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  }
  puVar6 = (uint *)(param_1 + -4);
  uVar5 = *puVar6;
  if ((uVar5 & 2) == 0) {
    DAT_0066c5c8 = 9;
    goto LAB_00402521;
  }
  _DAT_0066c5b4 = _DAT_0066c5b4 + -1;
  _DAT_0066c5b8 = _DAT_0066c5b8 - ((uVar5 & 0x7ffffffc) - 4);
  if ((uVar5 & 1) != 0) {
    uVar1 = *(uint *)(param_1 + -8);
    if (((int)uVar1 < 0xc) || ((uVar1 & 0x80000003) != 0)) {
      DAT_0066c5c8 = 10;
      goto LAB_00402521;
    }
    puVar6 = (uint *)((int)puVar6 - uVar1);
    if (uVar1 != puVar6[2]) {
      DAT_0066c5c8 = 10;
      goto LAB_00402521;
    }
    uVar5 = uVar5 + uVar1;
    FUN_00401ce0();
  }
  uVar5 = uVar5 & 0x7ffffffc;
  puVar3 = (uint *)((int)puVar6 + uVar5);
  if (puVar3 == DAT_0066c620) {
    DAT_0066c620 = (uint *)((int)DAT_0066c620 - uVar5);
    DAT_0066c61c = DAT_0066c61c + uVar5;
    if (0x3c00 < DAT_0066c61c) {
      FUN_00401fd0();
    }
    FUN_004042fc();
    return 0;
  }
  if ((*puVar3 & 2) == 0) {
    if (((puVar3[1] == 0) || (*puVar3 == 0)) || ((int)puVar3[2] < 0xc)) {
      DAT_0066c5c8 = 0xb;
      goto LAB_00402521;
    }
    uVar5 = uVar5 + puVar3[2];
    FUN_00401ce0();
  }
  else {
    if ((*puVar3 & 0x7ffffffc) < 4) {
      DAT_0066c5c8 = 0xb;
      goto LAB_00402521;
    }
    *puVar3 = *puVar3 | 1;
  }
  FUN_00401f48(puVar6,uVar5);
LAB_00402521:
  uVar4 = 0;
  *in_FS_OFFSET = uStack_20;
  if (DAT_0066c04d != '\0') {
    uStack_20 = 0x402549;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  }
  return uVar4;
}


// Address: 00402228
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_00402228(int param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  
  if (((DAT_0066c5c4 == '\0') && (cVar2 = FUN_00401b3c(), cVar2 == '\0')) || (0x7ffffff8 < param_1))
  {
    return (uint *)0x0;
  }
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (DAT_0066c04d != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  }
  puVar4 = DAT_0066c620;
  uVar5 = param_1 + 7U & 0xfffffffc;
  if ((int)uVar5 < 0xc) {
    uVar5 = 0xc;
  }
  if ((int)uVar5 < 0x1001) {
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = uVar5 + 3;
    }
    puVar1 = *(uint **)(DAT_0066c624 + -0xc + ((int)uVar3 >> 2) * 4);
    if (puVar1 != (uint *)0x0) {
      *(uint *)((int)puVar1 + uVar5) = *(uint *)((int)puVar1 + uVar5) & 0xfffffffe;
      puVar4 = (uint *)puVar1[1];
      if (puVar1 == puVar4) {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(undefined4 *)(DAT_0066c624 + -0xc + ((int)uVar3 >> 2) * 4) = 0;
      }
      else {
        uVar3 = uVar5;
        if ((int)uVar5 < 0) {
          uVar3 = uVar5 + 3;
        }
        *(uint **)(DAT_0066c624 + -0xc + ((int)uVar3 >> 2) * 4) = puVar4;
        uVar3 = *puVar1;
        *(uint **)(uVar3 + 4) = puVar4;
        *puVar4 = uVar3;
      }
      *puVar1 = puVar1[2] | 2;
      _DAT_0066c5b4 = _DAT_0066c5b4 + 1;
      _DAT_0066c5b8 = _DAT_0066c5b8 + (uVar5 - 4);
      FUN_004042fc();
      return puVar1 + 1;
    }
  }
  if ((int)uVar5 <= DAT_0066c61c) {
    DAT_0066c61c = DAT_0066c61c - uVar5;
    if (DAT_0066c61c < 0xc) {
      uVar5 = uVar5 + DAT_0066c61c;
      DAT_0066c61c = 0;
    }
    DAT_0066c620 = (uint *)((int)DAT_0066c620 + uVar5);
    *puVar4 = uVar5 | 2;
    _DAT_0066c5b4 = _DAT_0066c5b4 + 1;
    _DAT_0066c5b8 = _DAT_0066c5b8 + (uVar5 - 4);
    FUN_004042fc();
    return puVar4 + 1;
  }
  FUN_00402134(uVar5);
  puVar4 = (uint *)0x0;
  *in_FS_OFFSET = uStack_24;
  if (DAT_0066c04d != '\0') {
    uStack_24 = 0x4023a3;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0066c5cc);
  }
  return puVar4;
}


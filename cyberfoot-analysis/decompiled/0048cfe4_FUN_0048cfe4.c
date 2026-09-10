// Address: 0048cfe4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Removing unreachable block (ram,0x0048d00b) */

void FUN_0048cfe4(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  param_1[1] = 0;
  uVar1 = FUN_0048d114(param_1);
  puVar2 = (undefined4 *)FUN_0048d0d8(param_1,0x54);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0048d118(param_1);
    iVar4 = *param_1;
    *(undefined4 *)(iVar4 + 0x14) = 0x36;
    *(undefined4 *)(iVar4 + 0x18) = 0;
    (**(code **)*param_1)();
  }
  *puVar2 = FUN_0048c4cc;
  iVar4 = 1;
  puVar2[1] = FUN_0048c5fc;
  puVar2[2] = FUN_0048c69c;
  puVar2[3] = FUN_0048c770;
  puVar2[4] = FUN_0048c854;
  puVar2[5] = FUN_0048c8bc;
  puVar2[6] = FUN_0048c924;
  puVar2[7] = FUN_0048cc14;
  puVar2[8] = FUN_0048cd58;
  puVar2[9] = FUN_0048cea0;
  puVar2[10] = FUN_0048cfac;
  puVar2[0xc] = 1000000000;
  puVar2[0xb] = uVar1;
  puVar3 = puVar2 + 0xe;
  do {
    iVar4 = iVar4 + -1;
    *puVar3 = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + -1;
  } while (-1 < iVar4);
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0x54;
  param_1[1] = (int)puVar2;
  return;
}


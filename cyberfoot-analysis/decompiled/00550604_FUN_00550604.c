// Address: 00550604
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_00550604(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  byte bVar3;
  int aiStackY_1808 [1518];
  float fVar4;
  undefined4 *puVar5;
  undefined4 local_2c;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  bVar3 = 0;
  if ((1 < *(int *)(param_1 + 0x48)) && (1 < *(int *)(param_1 + 0x4c))) {
    uVar1 = FUN_0042b5a8(param_2);
    puVar2 = (undefined4 *)FUN_004af018(PTR_DAT_004ae274,1,uVar1);
    puVar5 = (undefined4 *)0x0;
    uVar1 = 0;
    local_18 = *(int *)(param_1 + 0x48) + -1;
    fVar4 = (float)local_18;
    local_1c = *(int *)(param_1 + 0x4c) + -1;
    FUN_004aeba4(&stack0xffffffec);
    if (*(char *)(param_1 + 0x170) == '\0') {
      uVar1 = 0xff;
      fVar4 = 3.57331e-43;
      FUN_005279a4(*(undefined4 *)(param_1 + 0x174),puVar2,&stack0xffffffec,&stack0xffffffd4,0xff,
                   0xff,0xff,0xff,0xff);
      local_14 = local_2c;
      *(undefined4 *)((int)&stack0xfffffff0 + (uint)bVar3 * 0xfffffffe * 4) =
           *(undefined4 *)((int)&stack0xffffffd8 + (uint)bVar3 * 0xfffffffe * 4);
      *(undefined4 *)(&stack0xfffffff4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(undefined4 *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      *(undefined4 *)
       ((int)(&stack0xfffffff4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
           = *(undefined4 *)
              ((int)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
              ((uint)bVar3 * -2 + 1) * 4);
      puVar5 = puVar2;
    }
    if ((*(int *)(*(int *)(param_1 + 0x18c) + 0x24) != 0) && (*(char *)(param_1 + 400) != '\0')) {
      puVar5 = &stack0xffffffec;
      uVar1 = *(undefined4 *)(param_1 + 0x198);
      fVar4 = *(float *)(param_1 + 0x194);
      FUN_00550000(param_1,*(int *)(param_1 + 0x18c),puVar2,fVar4,uVar1,puVar5);
    }
    if (*(int *)(*(int *)(param_1 + 0x16c) + 0x24) != 0) {
      FUN_00550000(param_1,*(int *)(param_1 + 0x16c),puVar2,0,0,&stack0xffffffec,fVar4,uVar1,puVar5)
      ;
    }
    FUN_00403a84(puVar2);
  }
  return;
}


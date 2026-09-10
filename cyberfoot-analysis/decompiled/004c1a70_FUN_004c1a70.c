// Address: 004c1a70
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

int FUN_004c1a70(int param_1,char param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 auStack_17f0 [1524];
  undefined4 local_14;
  
  bVar4 = 0;
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00403de8();
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_004c1f58(param_3,&stack0xffffffec);
  FUN_00403a54(param_1,0);
  puVar2 = (undefined4 *)(param_1 + 8 + (uint)bVar4 * -8);
  *(undefined4 *)(param_1 + 4) = local_14;
  puVar3 = puVar2 + (uint)bVar4 * -2 + 1;
  *puVar2 = *(undefined4 *)((int)&stack0xfffffff0 + (uint)bVar4 * 0xfffffffe * 4);
  *puVar3 = *(undefined4 *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  puVar3[(uint)bVar4 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  if (cVar1 != '\0') {
    FUN_00403e40(param_1);
    *in_FS_OFFSET = auStack_17f0[0x5f0];
  }
  return param_1;
}


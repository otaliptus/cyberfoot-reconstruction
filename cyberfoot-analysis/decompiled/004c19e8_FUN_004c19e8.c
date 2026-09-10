// Address: 004c19e8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_004c19e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 auStackY_17f0 [1522];
  undefined4 local_14;
  
  bVar3 = 0;
  FUN_004c1fc4(&stack0xffffffec,param_2,param_3,param_4,param_5);
  puVar1 = (undefined4 *)(param_1 + 8 + (uint)bVar3 * -8);
  *(undefined4 *)(param_1 + 4) = local_14;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = *(undefined4 *)((int)&stack0xfffffff0 + (uint)bVar3 * 0xfffffffe * 4);
  *puVar2 = *(undefined4 *)(&stack0xfffffff4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  puVar2[(uint)bVar3 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xfffffff4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) + ((uint)bVar3 * -2 + 1) * 4)
  ;
  return;
}


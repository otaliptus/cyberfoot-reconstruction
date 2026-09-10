// Address: 0046f25c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_0046f25c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 auStackY_17f8 [1525];
  undefined4 *puVar7;
  undefined4 local_1c;
  
  bVar6 = 0;
  puVar7 = &stack0xffffffe4;
  iVar1 = FUN_0046f1dc();
  if (iVar1 == 0) {
    FUN_004032a8(param_3,0x10,0);
  }
  else {
    uVar2 = FUN_0046eac8(iVar1,1);
    uVar3 = FUN_0046eac8(iVar1,2);
    uVar4 = FUN_0046ea5c(iVar1,1);
    uVar5 = FUN_0046ea5c(iVar1,2);
    FUN_0041c9b8(uVar5,uVar4,uVar3,puVar7,uVar2);
    puVar7 = param_3 + (uint)bVar6 * -2 + 1;
    *param_3 = local_1c;
    *puVar7 = *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar6 * 0xfffffffe * 4);
    puVar7[(uint)bVar6 * -2 + 1] =
         *(undefined4 *)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    (puVar7 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
  }
  return;
}


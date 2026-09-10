// Address: 0047f81c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Type propagation algorithm not settling */

void FUN_0047f81c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 auStackY_17f8 [1525];
  undefined4 *puVar5;
  undefined4 local_1c;
  
  bVar4 = 0;
  puVar5 = &stack0xffffffe4;
  uVar2 = FUN_00465c50(param_1);
  uVar2 = FUN_004323b8(uVar2,*(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x10));
  uVar3 = FUN_00465c0c(param_1);
  iVar1 = *(int *)(param_1 + 0x208);
  uVar3 = FUN_004323b8(*(undefined4 *)(iVar1 + 0x10),uVar3);
  FUN_0041c9b8(-*(int *)(iVar1 + 0xc),-*(int *)(*(int *)(param_1 + 0x20c) + 0xc),uVar3,puVar5,uVar2)
  ;
  puVar5 = param_2 + (uint)bVar4 * -2 + 1;
  *param_2 = local_1c;
  *puVar5 = *(undefined4 *)((int)&stack0xffffffe8 + (uint)bVar4 * 0xfffffffe * 4);
  puVar5[(uint)bVar4 * -2 + 1] =
       *(undefined4 *)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  (puVar5 + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(undefined4 *)
        ((int)(&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) + ((uint)bVar4 * -2 + 1) * 4)
  ;
  FUN_00468a6c(param_1,param_2);
  return;
}


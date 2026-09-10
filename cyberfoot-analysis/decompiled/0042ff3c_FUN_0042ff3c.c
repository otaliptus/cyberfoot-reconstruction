// Address: 0042ff3c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0042ff3c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 auStack_60 [5];
  undefined4 uStack_4c;
  
  bVar5 = 0;
  puVar1 = (undefined4 *)FUN_00403a54(PTR_PTR_0041c090,1);
  (**(code **)(*param_1 + 0x58))(param_1,puVar1);
  (**(code **)*puVar1)();
  FUN_00420958(puVar1);
  puVar3 = (undefined4 *)(param_1[10] + 0x18);
  puVar4 = auStack_60;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uStack_4c = 0;
  FUN_0043051c(param_1);
  FUN_0040fe60(param_1 + 0xb);
  FUN_004307ec(param_1,0,0,puVar1,
               CONCAT31((int3)((uint)param_1[10] >> 8),*(undefined1 *)(param_1[10] + 0x70)),
               auStack_60);
  return;
}


// Address: 00417548
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined1 FUN_00417548(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined4 auStack_1808 [1527];
  short local_2c;
  undefined4 auStack_28 [3];
  undefined4 local_1c;
  undefined4 auStack_18 [3];
  
  bVar5 = 0;
  puVar2 = (undefined4 *)thunk_FUN_004173cd(param_1);
  puVar3 = puVar2 + (uint)bVar5 * -2 + 1;
  uVar1 = *puVar2;
  auStack_28[(uint)bVar5 * -2] = *puVar3;
  auStack_28[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = puVar3[(uint)bVar5 * -2 + 1];
  (auStack_28 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  puVar2 = (undefined4 *)thunk_FUN_004173cd(param_2);
  puVar3 = puVar2 + (uint)bVar5 * -2 + 1;
  local_1c = *puVar2;
  auStack_18[(uint)bVar5 * -2] = *puVar3;
  auStack_18[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = puVar3[(uint)bVar5 * -2 + 1];
  (auStack_18 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (puVar3 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  local_2c = (short)uVar1;
  if (local_2c == 0) {
    uVar4 = (ushort)local_1c == 0;
  }
  else if (local_2c == 1) {
    uVar4 = (ushort)local_1c == 1;
  }
  else {
    uVar4 = (ushort)local_1c == 2;
    if ((ushort)local_1c < 2) {
      uVar4 = 0;
    }
    else {
      FUN_004190cc(param_1,param_2);
    }
  }
  return uVar4;
}


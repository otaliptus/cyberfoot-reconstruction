// Address: 004173d8
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004173d8(undefined4 param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  byte bVar5;
  uint auStack_17f8 [1526];
  int *local_20;
  uint local_1c;
  uint auStack_18 [3];
  
  bVar5 = 0;
  puVar2 = (uint *)thunk_FUN_004173cd(param_1);
  puVar4 = puVar2 + (uint)bVar5 * -2 + 1;
  local_1c = *puVar2;
  auStack_18[(uint)bVar5 * -2] = *puVar4;
  auStack_18[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] = puVar4[(uint)bVar5 * -2 + 1];
  (auStack_18 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
       (puVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  if ((ushort)local_1c < 0x10f) {
    if (((ushort)local_1c != 0) &&
       ((((ushort)local_1c != 9 && ((ushort)local_1c != 0xd)) || (auStack_18[1] != 0)))) {
      return 0;
    }
    uVar3 = 1;
  }
  else {
    cVar1 = FUN_00418f24(local_1c & 0xffff,&local_20);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*local_20 + 0x14))(local_20,&local_1c);
    }
  }
  return uVar3;
}


// Address: 00484b40
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00484b40(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 auStack_1814 [1538];
  
  bVar3 = 0;
  auStack_1814[0x5f8] = 0x28;
  (**(code **)PTR_DAT_0066afbc)();
  puVar1 = (undefined4 *)(param_2 + 4 + (uint)bVar3 * -8);
  *(undefined4 **)param_2 = auStack_1814 + 0x5f8;
  puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
  *puVar1 = auStack_1814[(uint)bVar3 * -2 + 0x5f8];
  *puVar2 = auStack_1814[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9];
  puVar2[(uint)bVar3 * -2 + 1] =
       (auStack_1814 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9)[(uint)bVar3 * -2 + 1];
  return;
}


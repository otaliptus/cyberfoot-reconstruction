// Address: 0049e3b0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0049e3b0(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x1c) == 0)) || (param_2 == 0)) ||
     ((*(int *)(*(int *)(param_1 + 0x1c) + 0x18) == 2 ||
      ((*(int *)(*(int *)(param_1 + 0x1c) + 0x18) == 1 &&
       (*(int *)(*(int *)(param_1 + 0x1c) + 4) != 0x2a)))))) {
    uVar3 = 0xfffffffe;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c);
    if (*(int *)(iVar2 + 0x18) != 0) {
      uVar3 = FUN_0049de50(*(undefined4 *)(param_1 + 0x30),param_2,param_3,param_3,0);
      *(undefined4 *)(param_1 + 0x30) = uVar3;
    }
    if (param_3 < 3) {
      uVar3 = 0;
    }
    else {
      uVar4 = *(int *)(iVar2 + 0x2c) - 0x106;
      if (uVar4 < param_3) {
        param_3 = uVar4;
      }
      FUN_0049de20();
      *(uint *)(iVar2 + 0x6c) = param_3;
      *(uint *)(iVar2 + 0x5c) = param_3;
      bVar1 = **(byte **)(iVar2 + 0x38);
      *(uint *)(iVar2 + 0x48) = (uint)bVar1;
      *(uint *)(iVar2 + 0x48) =
           ((uint)bVar1 << ((byte)*(undefined4 *)(iVar2 + 0x58) & 0x1f) ^
           (uint)*(byte *)(*(int *)(iVar2 + 0x38) + 1)) & *(uint *)(iVar2 + 0x54);
      for (uVar4 = 0; uVar4 <= param_3 - 3; uVar4 = uVar4 + 1) {
        uVar5 = (*(int *)(iVar2 + 0x48) << ((byte)*(undefined4 *)(iVar2 + 0x58) & 0x1f) ^
                (uint)*(byte *)(*(int *)(iVar2 + 0x38) + 2 + uVar4)) & *(uint *)(iVar2 + 0x54);
        *(uint *)(iVar2 + 0x48) = uVar5;
        *(undefined2 *)(*(int *)(iVar2 + 0x40) + (*(uint *)(iVar2 + 0x34) & uVar4) * 2) =
             *(undefined2 *)(*(int *)(iVar2 + 0x44) + uVar5 * 2);
        *(short *)(*(int *)(iVar2 + 0x44) + *(int *)(iVar2 + 0x48) * 2) = (short)uVar4;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


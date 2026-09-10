// Address: 00496928
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00496928(int *param_1,char *param_2,uint param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  
  if ((((param_3 < 0xc) || (*param_2 != 'A')) || (param_2[1] != 'd')) ||
     (((param_2[2] != 'o' || (param_2[3] != 'b')) || (param_2[4] != 'e')))) {
    iVar6 = *param_1;
    *(undefined4 *)(iVar6 + 0x14) = 0x4e;
    *(uint *)(iVar6 + 0x18) = param_3 + param_4;
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  else {
    bVar1 = param_2[7];
    bVar2 = param_2[8];
    bVar3 = param_2[9];
    bVar4 = param_2[10];
    bVar5 = param_2[0xb];
    iVar6 = *param_1;
    *(uint *)(iVar6 + 0x18) = (uint)(byte)param_2[5] * 0x100 + (uint)(byte)param_2[6];
    *(uint *)(iVar6 + 0x1c) = (uint)bVar1 * 0x100 + (uint)bVar2;
    *(uint *)(iVar6 + 0x20) = (uint)bVar3 * 0x100 + (uint)bVar4;
    *(uint *)(iVar6 + 0x24) = (uint)bVar5;
    *(undefined4 *)(*param_1 + 0x14) = 0x4c;
    (**(code **)(*param_1 + 4))(param_1,1);
    param_1[0x49] = 1;
    *(byte *)(param_1 + 0x4a) = bVar5;
  }
  return;
}


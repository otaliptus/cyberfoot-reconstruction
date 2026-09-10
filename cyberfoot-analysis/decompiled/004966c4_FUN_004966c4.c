// Address: 004966c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004966c4(int *param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  
  param_4 = param_3 + param_4;
  if ((((param_3 < 0xe) || (*param_2 != 'J')) || (param_2[1] != 'F')) ||
     (((param_2[2] != 'I' || (param_2[3] != 'F')) || (param_2[4] != '\0')))) {
    if (((param_3 < 6) || (*param_2 != 'J')) ||
       ((param_2[1] != 'F' || (((param_2[2] != 'X' || (param_2[3] != 'X')) || (param_2[4] != '\0')))
        ))) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0x14) = 0x4d;
      *(int *)(iVar2 + 0x18) = param_4;
      (**(code **)(*param_1 + 4))(param_1,1);
    }
    else {
      cVar1 = param_2[5];
      if (cVar1 == '\x10') {
        iVar2 = *param_1;
        *(undefined4 *)(iVar2 + 0x14) = 0x6c;
        *(int *)(iVar2 + 0x18) = param_4;
        (**(code **)(*param_1 + 4))(param_1,1);
      }
      else if (cVar1 == '\x11') {
        iVar2 = *param_1;
        *(undefined4 *)(iVar2 + 0x14) = 0x6d;
        *(int *)(iVar2 + 0x18) = param_4;
        (**(code **)(*param_1 + 4))(param_1,1);
      }
      else if (cVar1 == '\x13') {
        iVar2 = *param_1;
        *(undefined4 *)(iVar2 + 0x14) = 0x6e;
        *(int *)(iVar2 + 0x18) = param_4;
        (**(code **)(*param_1 + 4))(param_1,1);
      }
      else {
        iVar2 = *param_1;
        *(undefined4 *)(iVar2 + 0x14) = 0x59;
        *(uint *)(iVar2 + 0x18) = (uint)(byte)param_2[5];
        *(int *)(iVar2 + 0x1c) = param_4;
        (**(code **)(*param_1 + 4))(param_1,1);
      }
    }
  }
  else {
    param_1[0x46] = 1;
    *(char *)(param_1 + 0x47) = param_2[5];
    *(char *)((int)param_1 + 0x11d) = param_2[6];
    *(char *)((int)param_1 + 0x11e) = param_2[7];
    *(ushort *)(param_1 + 0x48) = (ushort)(byte)param_2[8] * 0x100 + (ushort)(byte)param_2[9];
    *(ushort *)((int)param_1 + 0x122) =
         (ushort)(byte)param_2[10] * 0x100 + (ushort)(byte)param_2[0xb];
    if ((char)param_1[0x47] != '\x01') {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0x14) = 0x77;
      *(uint *)(iVar2 + 0x18) = (uint)*(byte *)(param_1 + 0x47);
      *(uint *)(iVar2 + 0x1c) = (uint)*(byte *)((int)param_1 + 0x11d);
      (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    }
    iVar2 = *param_1;
    *(uint *)(iVar2 + 0x18) = (uint)*(byte *)(param_1 + 0x47);
    *(uint *)(iVar2 + 0x1c) = (uint)*(byte *)((int)param_1 + 0x11d);
    *(uint *)(iVar2 + 0x20) = (uint)*(ushort *)(param_1 + 0x48);
    *(uint *)(iVar2 + 0x24) = (uint)*(ushort *)((int)param_1 + 0x122);
    *(uint *)(iVar2 + 0x28) = (uint)*(byte *)((int)param_1 + 0x11e);
    *(undefined4 *)(*param_1 + 0x14) = 0x57;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (param_2[0xc] != '\0' || param_2[0xd] != '\0') {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0x14) = 0x5a;
      *(uint *)(iVar2 + 0x18) = (uint)(byte)param_2[0xc];
      *(uint *)(iVar2 + 0x1c) = (uint)(byte)param_2[0xd];
      (**(code **)(*param_1 + 4))(param_1,1);
    }
    if (param_4 + -0xe != (uint)(byte)param_2[0xc] * (uint)(byte)param_2[0xd] * 3) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0x14) = 0x58;
      *(int *)(iVar2 + 0x18) = param_4 + -0xe;
      (**(code **)(*param_1 + 4))(param_1,1);
    }
  }
  return;
}


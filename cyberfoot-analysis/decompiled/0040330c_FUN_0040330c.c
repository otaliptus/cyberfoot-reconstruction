// Address: 0040330c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0040330c(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  DWORD dwDesiredAccess;
  HANDLE pvVar2;
  DWORD DVar3;
  DWORD dwCreationDisposition;
  
  if (*(ushort *)(param_1 + 1) != 0xd7b0) {
    if (3 < *(ushort *)(param_1 + 1) - 0xd7b0) {
      DVar3 = 0x66;
      goto LAB_004033e0;
    }
    iVar1 = (*(code *)param_1[9])();
    if (iVar1 != 0) {
      FUN_00402984();
    }
  }
  *(undefined2 *)(param_1 + 1) = 0xd7b3;
  param_1[2] = param_2;
  param_1[9] = &LAB_004032e4;
  param_1[7] = &LAB_00402cc0;
  if (*(char *)(param_1 + 0x12) == '\0') {
    param_1[9] = &LAB_00402cc0;
    if (param_3 == 3) {
      DVar3 = 0xfffffff5;
    }
    else {
      DVar3 = 0xfffffff6;
    }
    pvVar2 = GetStdHandle(DVar3);
  }
  else {
    dwDesiredAccess = 0xc0000000;
    DVar3 = *(DWORD *)(&DAT_0066206c + ((DAT_0066200c & 0x70) >> 2));
    dwCreationDisposition = 2;
    if ((param_3 != 3) && (dwCreationDisposition = 3, param_3 != 2)) {
      dwDesiredAccess = 0x40000000;
      *(undefined2 *)(param_1 + 1) = 0xd7b2;
      if (param_3 != 1) {
        dwDesiredAccess = 0x80000000;
        *(undefined2 *)(param_1 + 1) = 0xd7b1;
      }
    }
    pvVar2 = CreateFileA((LPCSTR)(param_1 + 0x12),dwDesiredAccess,DVar3,(LPSECURITY_ATTRIBUTES)0x0,
                         dwCreationDisposition,0x80,(HANDLE)0x0);
  }
  if (pvVar2 != (HANDLE)0xffffffff) {
    *param_1 = pvVar2;
    return;
  }
  *(undefined2 *)(param_1 + 1) = 0xd7b0;
  DVar3 = GetLastError();
LAB_004033e0:
  FUN_00402984(DVar3);
  return;
}


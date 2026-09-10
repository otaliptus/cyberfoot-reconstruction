// Address: 00646fc0
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00646fc0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_0065208c(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + 0x3c + param_2 * 0x2f8));
  if (iVar2 != -1) {
    if (param_5 < 1) {
      if (param_5 < 0) {
        if (param_3 == 0) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + 1;
        }
        else if (param_3 == 1) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + 2;
        }
      }
    }
    else if (param_3 == 0) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
      *piVar1 = *piVar1 + -1;
    }
    else if (param_3 == 2) {
      piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
      *piVar1 = *piVar1 + -2;
    }
    if (param_1 == 1) {
      if (param_3 == 0) {
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_2 * 0x2f8) != '\0') &&
           ((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) < _DAT_006476b0)
           ) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -10;
        }
        if (param_4 == 1) {
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
            iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a8);
            if (iVar2 == 1) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + 2;
            }
            else if (iVar2 == 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + 1;
            }
            else if (iVar2 - 10U < 7) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -2;
            }
            else if (iVar2 - 0x11U < 4) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -5;
            }
          }
          else {
            iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a8);
            if (iVar2 - 1U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + 5;
            }
            else if (iVar2 - 3U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + 4;
            }
            else if (iVar2 - 7U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -3;
            }
            else if (iVar2 - 9U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -5;
            }
          }
        }
        if (param_4 == 2) {
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
            iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a8);
            if (iVar2 - 1U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + 3;
            }
            else if (iVar2 - 3U < 4) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + 1;
            }
            else if (iVar2 - 0xeU < 3) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -2;
            }
            else if (iVar2 - 0x11U < 4) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -4;
            }
          }
          else {
            iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a8);
            if (iVar2 - 1U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + 5;
            }
            else if (iVar2 - 3U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + 4;
            }
            else if (iVar2 - 7U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -3;
            }
            else if (iVar2 - 9U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -5;
            }
          }
        }
      }
      else if (param_3 == 1) {
        if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_2 * 0x2f8) != '\0') &&
           ((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) < _DAT_006476b0)
           ) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -9;
        }
        if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
          iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a8);
          if (iVar2 - 1U < 2) {
            piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
            *piVar1 = *piVar1 + 5;
          }
          else if (iVar2 - 3U < 4) {
            piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
            *piVar1 = *piVar1 + 3;
          }
          else if (iVar2 - 7U < 4) {
            piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
            *piVar1 = *piVar1 + 1;
          }
        }
        else {
          iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a8);
          if (iVar2 - 1U < 2) {
            piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
            *piVar1 = *piVar1 + 7;
          }
          else if (iVar2 - 3U < 2) {
            piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
            *piVar1 = *piVar1 + 5;
          }
          else if (iVar2 - 5U < 2) {
            piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
            *piVar1 = *piVar1 + 3;
          }
          else if (iVar2 - 7U < 2) {
            piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
            *piVar1 = *piVar1 + 1;
          }
        }
      }
      else if (param_3 == 2) {
        if ((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) < _DAT_006476b0)
        {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -0xc;
        }
        if (0x14 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x98 + param_2 * 0x2f8)) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -2;
        }
        if (param_4 == 1) {
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
            switch(*(undefined4 *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a8)) {
            case 1:
            case 2:
            case 3:
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -1;
              break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -2;
              break;
            case 9:
            case 10:
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -3;
              break;
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -5;
              break;
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -7;
            }
          }
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
            iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a8);
            if (iVar2 - 1U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -1;
            }
            else if (iVar2 - 3U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -2;
            }
            else if (iVar2 - 5U < 4) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -5;
            }
            else if (iVar2 - 9U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -7;
            }
          }
        }
        if (param_4 == 2) {
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 2) {
            iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a8);
            if (iVar2 - 4U < 5) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -1;
            }
            else if (iVar2 - 9U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -2;
            }
            else if (iVar2 - 0xbU < 6) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -4;
            }
            else if (iVar2 - 0x11U < 4) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -7;
            }
          }
          if (*(int *)(PTR_DAT_0066ac78 + 0x168) == 4) {
            iVar2 = *(int *)(*(int *)PTR_DAT_0066af70 + param_2 * 0x2f8 + 0x1a8);
            if (iVar2 - 3U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -1;
            }
            else if (iVar2 - 5U < 4) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -5;
            }
            else if (iVar2 - 9U < 2) {
              piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
              *piVar1 = *piVar1 + -7;
            }
          }
        }
      }
    }
    if (param_1 == 3) {
      if ((*(char *)(*(int *)PTR_DAT_0066af70 + 0x39 + param_2 * 0x2f8) != '\0') &&
         ((float)*(longlong *)(*(int *)PTR_DAT_0066af70 + 0x48 + param_2 * 0x2f8) < _DAT_006476b0))
      {
        piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
        *piVar1 = *piVar1 + -10;
      }
      if (param_3 == 0) {
        if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + param_2 * 0x2f8) < 3) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + 3;
        }
        if (4 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + param_2 * 0x2f8)) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + -2;
        }
      }
      else if (param_3 == 1) {
        if (*(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + param_2 * 0x2f8) < 3) {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + 5;
        }
        else {
          piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
          *piVar1 = *piVar1 + 2;
        }
      }
      else if ((param_3 == 2) &&
              (piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8),
              *piVar1 = *piVar1 + -2,
              3 < *(int *)(*(int *)PTR_DAT_0066af70 + 0x1b0 + param_2 * 0x2f8))) {
        piVar1 = (int *)(*(int *)PTR_DAT_0066af70 + 0x50 + param_2 * 0x2f8);
        *piVar1 = *piVar1 + -3;
      }
    }
    FUN_00647830(param_1,param_2,param_3,param_5,param_6);
  }
  return;
}

